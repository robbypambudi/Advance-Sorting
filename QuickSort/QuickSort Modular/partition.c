#include "header.h"

// Fungsi untuk mencari posisi partisi
int partition(int array[], int low, int high)
{

    // pilih elemen paling kanan sebagai pivot
    int pivot = array[high];

    // pointer untuk elemen yang lebih besar
    int i = (low - 1);

    // traverse setiap elemen array
    // bandingkan dengan pivot
    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {

            // jika elemen yang lebih kecil dari pivot ditemukan
            // tukar dengan elemen yang lebih besar yang ditunjukkan oleh i
            i++;

            // tukar elemen di i dengan elemen di j
            swap(&array[i], &array[j]);
        }
    }

    // tukar elemen pivot dengan elemen yang lebih besar di i
    swap(&array[i + 1], &array[high]);

    // return titik partisi
    return (i + 1);
}