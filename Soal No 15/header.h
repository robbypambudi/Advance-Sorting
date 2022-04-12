/*
    Nama Kelompok :
    1. Robby Ulung Pambudi
    2. M. Armand Giovani
    3. Fathin Muhashibi Putra
*/

/*
Deskripsi :
Ubah mergesort dan quicksort sehingga jika sublist yang akan diurutkan lebih kecil dari beberapa
ukuran yang telah ditentukan, itu diurutkan menggunakan semacam penyisipan.
*/

#include <stdio.h>

void heapSort(int num[], int n);
/*
	Funtion ini melakukan sorting dengan konsep heapSort
*/
void siftDown(int key, int num[], int root, int last);
void siftUp(int heap[], int n);
int deleteNum(int heap[], int* n);
/*
	Function ini melakukan penghapusan root pada heap.
	Penghapusan dilakukan dengan mengubah nilai heap pada posisi satu pada
	nilai heap pada posisi akhir. Setelah itu size dari array kita kurang.
	Kemudian kita buat sebuah array temp yang mengisi nilai yang sama dengan
	array heap. Setelah itu dapat kita jalankan makeheap untuk membuat menyusun
	heap yang baru.
*/
void mergeArray(int arr1[], int arr2[], int arr3[], int* n, int* n2);
/*
	Memerge 2 array ke array baru dengan fungsi delete. Dikarenakan fungsi
	delete selalu mengdelete nilai terbesar, kita dapat menggunakan fungsi untuk
	mengcompare nilai array mana yang lebih besar dan melakukan delete terlebih dahulu.
	Ketika delete dilakukan terhadap suatu array, kita ambil nilai yang didelete
	tersebut untuk memasukkannya ke array baru sesuai urutan.
*/
