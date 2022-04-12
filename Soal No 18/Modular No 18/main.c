#include "header.h"

int main()
{

    int data[1000];
    int n;

    // Scanner Number
    printf("Masukkan jumlah data : ");
    scanf("%d", &n);
    printf("Masukan data : ");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &data[i]);
    }

    int jumlahSwap;

    // melakukan quicksort pada data
    quickSort(data, 0, n - 1, &jumlahSwap);
    printf("\nJumlah Swap Sebanyak : %d\n", jumlahSwap);

    printf("\nSorted array in ascending order: \n");
    printArray(data, n);
}