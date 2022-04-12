#include "header.h"

// Menggabungkan min heap [1...n] dan [k+1...n] menjadi gabungan[]
void mergeHeaps(int merged[], int a[], int b[],
                int n, int m)
{
    // Salin elemen satu per satu untuk digabungkan[]
    int i;
    for (i = 0; i < n; i++)
        merged[i] = a[i];
    for (i = 0; i < m; i++)
        merged[n + i] = b[i];

    // membangun heap untuk array yang dimodifikasi dari
    // size n+m
    buildMinHeap(merged, n + m);
}