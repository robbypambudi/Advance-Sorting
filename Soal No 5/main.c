#include "header.h"

int main()
{
    int arr[] = { 51, 26, 32, 45, 38, 89, 29, 58, 34, 23, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    heapSort(arr, n);
    
    printArray(arr, n);
}