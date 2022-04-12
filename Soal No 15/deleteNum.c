#include "header.h"

/*
	Function ini melakukan penghapusan root pada heap.
	Penghapusan dilakukan dengan mengubah nilai heap pada posisi satu pada
	nilai heap pada posisi akhir. Setelah itu size dari array kita kurang. 
	Kemudian kita buat sebuah array temp yang mengisi nilai yang sama dengan
	array heap. Setelah itu dapat kita jalankan makeheap untuk membuat menyusun
	heap yang baru.
*/
int deleteNum(int heap[], int* n)
{
	int temp[*n], i, num;
	temp[0] = 0;
	num = heap[1];
	heap[1] = heap[*n];
	*n = *n - 1;
	for(i = 1; i <= *n; i++)
	{
		temp[i] = heap[i];
	}
	makeHeap(heap, temp, *n);
	return num;
}