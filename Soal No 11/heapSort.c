#include "header.h"

void heapSort(int num[], int n) 
{
	//sort num[1] to num[n]
	//convert the array to a heap
	int h, k;
	for (h = n / 2; h >= 1; h--) 
		siftDown(num[h], num, h, n);
	for (k = n; k > 1; k--) 
	{
		int item = num[k]; //extract current last item
		num[k] = num[1]; //move top of heap to current last node
		siftDown(item, num, 1, k-1); //restore heap properties from 1 to k-1
	}
} //end heapSort
