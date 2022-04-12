#include "header.h"

// Memasukan data kedalam array
void scaningNumber(FILE *fptr, int *arr, int *n)
{

    int i = 0;
    while (fscanf(fptr, "%d", &arr[i]) == 1)
    {
        i++;
        *n += 1;
    }
}