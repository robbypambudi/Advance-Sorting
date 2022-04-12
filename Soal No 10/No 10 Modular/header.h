/*
Nama Kelompok :
1. Robby Ulung Pambudi
2. M. Armand Giovari
3. Fathin Muhashibi Putra
*/

/*
Deskripsi :
Insertion Sortmenggunakan pencarian biner untuk menentukan posisi di mana A[j] 
akan disisipkan di antara sublist yang diurutkan A[1..j-1]
Penyelesaian :

*/
#include <stdio.h>

int binarySearch(int a[], int item, int low, int high);
void insertionSort(int a[], int n);
void scanNumber(int *arr, int *n);