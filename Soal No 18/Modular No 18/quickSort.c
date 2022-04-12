#include "header.h"

// FUngsi Utama QuickSort

void quickSort(int array[], int low, int high, int *jumlahSwap)
{
    if (low < high)
    {

        int pi = partition(array, low, high, jumlahSwap);

        // memanggil rekursif di sebelah kiri pivot
        quickSort(array, low, pi - 1, jumlahSwap);

        // memanggil rekursif di sebelah kanan pivot
        quickSort(array, pi + 1, high, jumlahSwap);
    }
}