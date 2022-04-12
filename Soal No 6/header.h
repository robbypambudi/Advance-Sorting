/*
Nama Kelompok :
1. Robby Ulung Pambudi
2. M. Armand Giovari
3. Fathin Muhashibi Putra
*/

/*
Deskripsi :
Sebuah fungsi diberikan sebuah array integer, A, dan dua subscript, m dan n. Fungsi harus
atur ulang elemen A[m] ke A[n] dan kembalikan subskrip d sedemikian rupa sehingga semua elemen
di sebelah kiri d kurang dari atau sama dengan A[d] dan semua elemen di sebelah kanan d lebih besar
dari A[d].
*/

#include <stdio.h>

void swap(int *a, int *b);
void heapSort(int arr[], int n);
void heapify(int arr[], int n, int i);
void sort(int arr[], int left[], int right[], int n);
