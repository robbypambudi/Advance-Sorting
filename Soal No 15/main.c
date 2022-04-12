#include "header.h"

int main() 
{	
	int h;
	//Array yang mau dibuat menjadi max heap
	int num[] = {12, 37, 25, 43, 65, 48, 84, 73, 18, 79, 56, 69, 32};
	int num2[] = {10, 3, 50, 2, 1, 23, 44, 87, 12, 36, 100};
	int n = num[0];
	int n2 = num2[0];
	//before Heap
	printf("Array 1 before heap : ");
	for (h = 1; h <= n; h++) printf("%d ", num[h]);
	printf("\n");
	printf("Array 2 before heap : ");
	for (h = 1; h <= n2; h++) printf("%d ", num2[h]);
	printf("\n");
	
	//array sementara
	int heap[n+1];
	int heap2[n2+1];
	
	//buat heap
	makeHeap(num, heap, n);
	makeHeap(num2, heap2, n2);
	
	//Array 1
	printf("Array 1 after heap : ");
	for (h = 1; h <= n; h++) printf("%d ", num[h]);
	printf("\n");
	
	//Array 2
	printf("Array 2 after heap : ");
	for (h = 1; h <= n2; h++) printf("%d ", num2[h]);
	printf("\n");
	
	//Array baru
	int New = n+n2;
	int merged[n+n2];
	//merge kedua array lama ke array baru
	mergeArray(num, num2, merged, &n, &n2);
	
	//print hasil keluar
	printf("Merged Array : ");
	for (h = 0; h <= New-1; h++) printf("%d ", merged[h]);
	printf("\n");
	return 0;
} //end main

/*
	output : 
	Array 1 before heap : 37 25 43 65 48 84 73 18 79 56 69 32
	Array 2 before heap : 3 50 2 1 23 44 87 12 36 100
	Array 1 after heap : 84 79 73 48 69 37 65 18 25 43 56 32
	Array 2 after heap : 100 87 50 23 36 2 44 1 12 3
	Merged Array : 100 87 84 79 73 69 65 56 50 48 44 43 37 36 32 25 23 18 12 3 2 1
*/
