#include "header.h"

// Fungsi Utama untuk menjalankan Quick Sort
void quickSort(int array[], int low, int high)
{
    if (low < high)
    {

        // temukan elemen pivot sedemikian rupa sehingga
        // elemen yang lebih kecil dari pivot berada di kiri pivot
        // elemen yang lebih besar dari pivot berada di kanan pivot
        int pi = partition(array, low, high);

        // memanggil rekursif di sebelah kiri pivot
        quickSort(array, low, pi - 1);

        // memanggil rekursif di sebelah kanan pivot
        quickSort(array, pi + 1, high);
    }
}