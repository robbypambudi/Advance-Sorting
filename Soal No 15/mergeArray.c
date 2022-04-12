#include "header.h"

/*
	Memerge 2 array ke array baru dengan fungsi delete. Dikarenakan fungsi
	delete selalu mengdelete nilai terbesar, kita dapat menggunakan fungsi untuk
	mengcompare nilai array mana yang lebih besar dan melakukan delete terlebih dahulu.
	Ketika delete dilakukan terhadap suatu array, kita ambil nilai yang didelete
	tersebut untuk memasukkannya ke array baru sesuai urutan.
*/

void mergeArray(int arr1[], int arr2[], int arr3[], int* n, int* n2)
{
	int i = 0;
	int target = *n + *n2;
	int temp1 = 0;
	int temp2 = 0;
	while(temp1+temp2 != target)
	{
		if(*n == 0)
		{
			arr3[i] = deleteNum(arr2, n2);
			temp2++;
		}
		else if(*n2 == 0)
		{
			arr3[i] = deleteNum(arr1, n);
			temp1++;
		}
		else if(arr1[1] >= arr2[1])
		{
			arr3[i] = deleteNum(arr1, n);
			//printf("arr[%d] = %d\n", i , arr3[i]);
			temp1++;
		}
		else if(arr1[1] < arr2[1])
		{
			arr3[i] = deleteNum(arr2, n2);
			//printf("arr[%d] = %d\n", i , arr3[i]);
			temp2++;
		}
		//printf("temp1 : %d, temp2 : %d, *n2 = %d\n", temp1, temp2, *n2);
		i++;
	}
}
