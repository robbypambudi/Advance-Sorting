#include "header.h"

// Fungsi Utama untuk memindai angka
void scaningNumber(int *arr, FILE *fptr, int *n)
{
    int i = 0;
    *n = 0;
    while (fscanf(fptr, "%d", &arr[i]) != EOF)
    {
        i++;
    }
    *n = i;
}