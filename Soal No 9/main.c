/*
Nama Kelompok :
1. Robby Ulung Pambudi
2. M. Armand Giovari
3. Fathin Muhashibi Putra
*/

/*
Deskripsi :
Tulislah fungsi rekursif untuk mencari bilangan terkecil ke-k dalam array n bilangan,
tanpa mengurutkan array.
*/

#include <stdio.h>

// Write a recursive function for finding the kth smallest number in an array of n numbers, without sorting the array.
void findKthSmallest(int arr[], int n, int *min)
{
    if (n == 0)
    {
        *min = arr[0];
    }
    else
    {
        findKthSmallest(arr, n -= 1, min);
        if (arr[n] < *min)
        {
            *min = arr[n];
        }
    }
}
void scanNumber(int arr[], int *a)
{
    for (int i = 0; i < *a; i++)
    {
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int main()
{
    int arr[1000];
    int n;
    int min = 10000;
    printf("Masukkan jumlah elemen : ");
    scanf("%d", &n);
    scanNumber(arr, &n);
    findKthSmallest(arr, n, &min);
    printf("Nilai Minimum dari array adalah %d\n", min);
    printf("\n");
    return 0;
}