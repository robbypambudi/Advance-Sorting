#include "header.h"

void siftUp(int heap[], int n) 
{
	//sifts up the value in heap[n] so that heap[1..n] contains a heap
	int siftItem = heap[n];
	int child = n;
	int parent = child / 2;
	while (parent > 0) 
	{
		if (siftItem <= heap[parent]) break;
		heap[child] = heap[parent]; //move down parent
		child = parent;
		parent = child / 2;
	}
	heap[child] = siftItem;
} //end siftUp
