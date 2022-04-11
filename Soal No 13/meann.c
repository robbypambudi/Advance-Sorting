#include "header.h"

// Fungsi Untuk menemukan rata - rata nilai dari list

double meann(int arr[], int l, int r)
{
    double summ = 0.0;
    int N = l + r;
    printf("%d\n", N);
    for (int i = 0; i < (N + 1); i++)
    {
        summ = arr[i] + summ;
    }
    return (summ / (N + 1));
}