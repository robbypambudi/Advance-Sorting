#include "header.h"

// Implementasi Iteratif 
int binarySearch(int a[], int item, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (item == a[mid])
            return mid + 1;
        else if (item > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }

    return low;
}