#include "header.h"

// Fungsi utilitas untuk membuat array berukuran n
void createArray(int arr[], int n, int sat)
{
    FILE *output;
    if (sat == 1)
    {
        output = fopen("output_10.txt", "w");
        for (int i = 0; i < n; i++)
        {
            fprintf(output, "%d\n", arr[i]);
        }
    }
    else if (sat == 2)
    {
        output = fopen("output_100.txt", "w");
        for (int i = 0; i < n; i++)
        {
            fprintf(output, "%d\n", arr[i]);
        }
    }
    else if (sat == 3)
    {
        output = fopen("output_1000.txt", "w");
        for (int i = 0; i < n; i++)
        {
            fprintf(output, "%d\n", arr[i]);
        }
    }
    else if (sat == 4)
    {
        output = fopen("output_10000.txt", "w");
        for (int i = 0; i < n; i++)
        {
            fprintf(output, "%d\n", arr[i]);
        }
    }
    else if (sat == 5)
    {
        output = fopen("output_100000.txt", "w");
        for (int i = 0; i < n; i++)
        {
            fprintf(output, "%d\n", arr[i]);
        }
    }
    fclose(output);
}