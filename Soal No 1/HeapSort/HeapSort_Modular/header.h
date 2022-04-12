// Deskripsi

// Penyelesaian:

// Heap Sort in C

#include <stdio.h>
#include <time.h>

void swap(int *a, int *b);
void heapify(int arr[], int n, int i);
void heapSort(int arr[], int n);
void printArray(int arr[], int n, int sat);
void scaningNumber(FILE *fptr, int *arr, int *n);
