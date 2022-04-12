#include "header.h"

void selectionSort(FILE *fptr, int sat)
{
    int i = 0, j, n = 0, min, index;

    // mendeklarasikan array untuk menyimpan data dari file
    int arr[100000];
    // membaca integer dari file menjadi array
    while (fscanf(fptr, "%d", &arr[i]) == 1)
    {

        // untuk menghitung banyaknya n (elemen) 
        n++;

        //untuk menambah (increment) indeks array
        i++;
    }
    for (i = 0; i < n - 1; i++)
    {
        min = arr[i];
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                index = j;
            }
        }

        // Menukar(swap) angka terkecil dengan nilai array[i] saat ini(current)
        int temp = arr[i];
        arr[i] = min;
        arr[index] = temp;
    }
    FILE *out;
    if (sat == 1)
    {
        out = fopen("output_10.txt", "w");
        for (i = 0; i < n; i++)
        {
            fprintf(out, "%d\n", arr[i]);
        }
    }

    else if (sat == 2)
    {
        out = fopen("output_100.txt", "w");
        for (i = 0; i < n; i++)
        {
            fprintf(out, "%d\n", arr[i]);
        }
    }
    else if (sat == 3)
    {
        out = fopen("output_1000.txt", "w");
        for (i = 0; i < n; i++)
        {
            fprintf(out, "%d\n", arr[i]);
        }
    }
    else if (sat == 4)
    {
        out = fopen("output_10000.txt", "w");
        for (i = 0; i < n; i++)
        {
            fprintf(out, "%d\n", arr[i]);
        }
    }
    else if (sat == 5)
    {
        out = fopen("output_100000.txt", "w");
        for (i = 0; i < n; i++)
        {
            fprintf(out, "%d\n", arr[i]);
        }
    }
    fclose(out);
}