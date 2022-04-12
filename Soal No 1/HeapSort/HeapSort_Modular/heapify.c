#include "header.h"

void heapify(int arr[], int n, int i)
{
    // Mencari Nilai terbesar dari anak kiri dan kanan
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // Jika anak kiri lebih besar dari anak kanan
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Jika anak kanan lebih besar dari anak kiri
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Swap and continue heapifying if root is not largest
    if (largest != i)
    {
        swap(&arr[i], &arr[largest]); // Swap
        heapify(arr, n, largest);     // Heapify
    }
}