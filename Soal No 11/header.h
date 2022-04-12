/*
Nama Kelompok :
1. Robby Ulung Pambudi
2. M. Armand Giovari
3. Fathin Muhashibi Putra
*/

/*
Deskripsi :
Integer max-heap disimpan dalam array (A, katakanlah) sedemikian rupa sehingga ukuran tumpukan (n, katakanlah) disimpan
di A[0] dan A[1] hingga A[n] berisi elemen heap dengan nilai terbesar di A[1].
Tulis sebuah fungsi deleteMax yang, jika diberikan array seperti A, menghapus elemen terbesar dan
mengatur ulang array sehingga tetap menjadi tumpukan.
Diberikan dua array, A dan B, yang berisi tumpukan seperti yang dijelaskan sebelumnya, tulis kode pemrograman ke
gabungkan elemen A dan B ke dalam larik lain, C, sehingga C dalam urutan menaik. Milikmu
metode harus dilanjutkan dengan comp
*/

#include <stdio.h>

//	Funtion ini melakukan sorting dengan konsep heapSort
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
