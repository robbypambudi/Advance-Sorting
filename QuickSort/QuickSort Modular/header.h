// Deskripsi

// Penyelesaian:

// Quick Sort in C

#include <stdio.h>
#include <time.h>

void swap(int *a, int *b);
int partition(int array[], int low, int high);
void quickSort(int array[], int low, int high);
void createArray(int arr[], int n, int sat);
void scaningNumber(int *arr, FILE *fptr, int *n);
