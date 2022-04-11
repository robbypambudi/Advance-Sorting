#include "header.h"

void sort(int arr[], int left[], int right[], int n)
{
    // Sorting the arr
    heapSort(arr, n);

    // Bagi 2
    int mid = n / 2;

    // data ke 1 -> mid dimasukan kedalam left
    for (int i = 0; i < mid; i++)
    {
        left[i] = arr[i];
    }

    // data ke mid+1 -> n dimasukan kedalam right
    for (int i = mid; i < n; i++)
    {
        right[i - mid] = arr[i];
    }
}