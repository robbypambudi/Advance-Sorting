#include "header.h"

int main()
{
    int a[100000];
    int n, i;
    scanNumber(a, &n);

    insertionSort(a, n);

    FILE *out;
    out = fopen("output.txt", "w"); // Buka file outputnya "output.txt"
    fprintf(out, "Sorted Array : \n");
    for (i = 0; i < n; i++)
        fprintf(out, "%d\n", a[i]);

    return 0;
}