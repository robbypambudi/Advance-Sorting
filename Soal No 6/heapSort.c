#include "header.h"

void heapSort(int arr[], int n)
{
    // Bangun max heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Heap sort
    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);

        // Heapify root element untuk mendapatkan elemen terbesar di root
        heapify(arr, i, 0);
    }
}
