#include "header.h"

void quicksort(int arr[], int l, int r)
{
    if (l < r)
    {
        int p;
        p = partition(arr, l, r);
        quicksort(arr, l, r - 1);
        quicksort(arr, l + 1, r);
    }
}
