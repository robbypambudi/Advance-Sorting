/*
Nama Kelompok :
1. Robby Ulung Pambudi
2. M. Armand Giovari
3. Fathin Muhashibi Putra
*/

/*
Deskripsi :
Tulis kode untuk membaca satu set bilangan bulat positif (diakhiri oleh 0) dan buat tumpukan dalam array H
dengan nilai terkecil di bagian atas tumpukan. Saat setiap bilangan bulat dibaca, itu dimasukkan di antara
item yang ada sehingga properti heap dipertahankan. Setiap saat, jika n angka telah dibaca, maka H[1..n] 
harus berisi heap. Asumsikan bahwa H cukup besar untuk menampung semua bilangan bulat.

Diketahui data 51 26 32 45 38 89 29 58 34 23 0, tunjukkan isi H setelah masing-masing
nomor telah dibaca dan diproses.

Penyelesaian :

*/

#include <stdio.h>

void swap(int *a, int *b);
void heapSort(int arr[], int n);
void makeheap(int arr[], int n, int i);
void printArray(int arr[], int n);
