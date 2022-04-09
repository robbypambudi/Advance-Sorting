#include "header.h"

// Fungsi Utama untuk menjalankan Insertion Sort
void insertionSort(int arr[], int n)
{
        int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        /* Pindahkan elemen arr[0..i-1], yang lebih besar dari key, 
            ke satu posisi di depan posisinya saat ini */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}