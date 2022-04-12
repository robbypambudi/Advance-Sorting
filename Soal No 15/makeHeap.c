#include "header.h"

/*
	Function ini digunakan untuk menyusun heap dari sebuah array. 
	Dibutuhkan 2 array. 1 array asal dan 1 array yang akan dibuat heap.
*/

void makeHeap(int num[], int heap[], int n)
{
	int h = 0;
	int i = 0;
	while (h != n) 
	{
		heap[++i] = num[h];
		siftUp(num, i) ;
		h++;
	}
}
