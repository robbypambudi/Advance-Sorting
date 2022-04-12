#include "header.h"

// Membangun tumpukan min dari arr[0..n-1] yang diberikan
void buildMinHeap(int arr[], int n)
{
    // membangun tumpukan dari non-daun pertama
    // simpul dengan memanggil fungsi min heapify
    int i;
    for (i = n / 2 - 1; i >= 0; i--)
        minHeapify(arr, n, i);
}
