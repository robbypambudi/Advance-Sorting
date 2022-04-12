#include "header.h"

// Fungsi Utama untuk memindai angka
void scaningNumber(int *arr, FILE *fptr, int *n)
{

    int i = 0;
    while (fscanf(fptr, "%d", &arr[i]) == 1)
    {
        // printf("%d\n", arr[i]);
        i++;
        *n += 1;
    }
}