/*
	Kelompok   : 9
	Kelas      : Struktur Data F

	-----------Anggota 1-----------
	Nama       : Robby Ulung Pambudi

	-----------Anggota 2-----------
	Nama       : M Armand Giovani

	-----------Anggota 3-----------
	Nama		: Fathin Muhashibi Putra


	Pengerjaan : 11 April 2022
*/
#include <stdio.h>

/*
	Funtion ini melakukan sorting dengan konsep heapSort
*/
void makeHeap(int num[], int heap[], int n);
void heapSort(int num[], int n);
// Function to build a heap
void siftDown(int key, int num[], int root, int last);
void siftUp(int heap[], int n);
/*
	Function ini melakukan penghapusan root pada heap.
	Penghapusan dilakukan dengan mengubah nilai heap pada posisi satu pada
	nilai heap pada posisi akhir. Setelah itu size dari array kita kurang.
	Kemudian kita buat sebuah array temp yang mengisi nilai yang sama dengan
	array heap. Setelah itu dapat kita jalankan makeheap untuk membuat menyusun
	heap yang baru.
*/
int deleteNum(int heap[], int *n);
/*
	Memerge 2 array ke array baru dengan fungsi delete. Dikarenakan fungsi
	delete selalu mengdelete nilai terbesar, kita dapat menggunakan fungsi untuk
	mengcompare nilai array mana yang lebih besar dan melakukan delete terlebih dahulu.
	Ketika delete dilakukan terhadap suatu array, kita ambil nilai yang didelete
	tersebut untuk memasukkannya ke array baru sesuai urutan.
*/
void mergeArray(int arr1[], int arr2[], int arr3[], int *n, int *n2);
