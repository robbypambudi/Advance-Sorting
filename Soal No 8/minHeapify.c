#include "header.h"

// Fungsi heapify standar untuk heapify a
// subtree berakar di bawah idx. Ini mengasumsikan
// bahwa subtrees dari simpul sudah ditumpuk.
void minHeapify(int arr[], int n, int idx)
{
    // Temukan node terkecil dan anak-anaknya
    if (idx >= n)
        return;
    int l = 2 * idx + 1;
    int r = 2 * idx + 2;
    int min;
    if (l < n && arr[l] < arr[idx])
        min = l;
    else
        min = idx;
    if (r < n && arr[r] < arr[min])
        min = r;

    // Letakkan nilai minimum di root dan ulangi untuk anak dengan nilai minimum
    if (min != idx)
    {
        int temp = arr[min];
        arr[min] = arr[idx];
        arr[idx] = temp;
        minHeapify(arr, n, min);
    }
}