#include "header.h"

// Pindai Angka
void scanNumber(int *arr, int *n)
{
    FILE *in;
    in = fopen("input.txt", "r"); // Membaca inputan yaitu file input.txt
    int i = 0;
    int temp;
    while (!feof(in))   // loop sampai data habis
    {
        fscanf(in, "%d", &temp);
        arr[i] = temp;
        i++;
    }
    *n = i;
    fclose(in);
}