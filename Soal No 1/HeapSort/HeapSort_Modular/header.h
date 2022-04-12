/*
Nama Kelompok :
1. Robby Ulung Pambudi
2. M. Armand Giovari
3. Fathin Muhashibi Putra
*/

/*
Deskripsi :
Mengitung waktu menggunakan heap sort
*/

// Heap Sort in C

#include <stdio.h>
#include <time.h>

void swap(int *a, int *b);
void heapify(int arr[], int n, int i);
void heapSort(int arr[], int n);
void printArray(int arr[], int n, int sat);
void scaningNumber(FILE *fptr, int *arr, int *n);
