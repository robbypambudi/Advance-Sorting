#include "header.h"

// Fungsi untuk mengurutkan array a[] dengan ukuran 'n'
void insertionSort(int a[], int n)
{
    int i, loc, j, k, selected;

    for (i = 1; i < n; ++i)
    {
        j = i - 1;
        selected = a[i];

        // Lokasi di mana yang dipilih harus dimasukkan
        loc = binarySearch(a, selected, 0, j);

        // Pindahkan semua elemen setelah lokasi untuk menciptakan ruang
        while (j >= loc)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = selected;
    }
}
