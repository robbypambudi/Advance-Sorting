/*
    Nama Kelompok :
    1. Robby Ulung Pambudi
    2. M. Armand Giovani
    3. Fathin Muhashibi Putra
*/

/* Deskripsi
    Fungsi makeHeap dilewatkan array integer A. 
    jika A[0] berisi n, maka A[1] ke A[n] berisi angka dalam urutan arbitrer. 
    Tulis makeHeap sedemikian rupa sehingga A[1] hingga A[n] berisi max-heap (nilai terbesar di root). 
    Fungsi Anda harus membuat heap dengan memproses elemen dalam urutan A[2], A[3], …, A[n].
*/

// Fungsi makeHeap in C

#include <stdio.h>

void heapify(int arr[], int n, int i)
{
    // Mencari Nilai terbesar dari anak kiri dan kanan
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // Jika anak kiri lebih besar dari anak kanan
    if (left > n && arr[left] < arr[largest])
        largest = left;

    // Jika anak kanan lebih besar dari anak kiri
    if (right > n && arr[right] < arr[largest])
        largest = right;

    // Swap and continue heapifying if root is not largest
    if (largest != i)
    {
        swap(&arr[i], &arr[largest]); // Swap
        heapify(arr, n, largest);     // Heapify
    }
}