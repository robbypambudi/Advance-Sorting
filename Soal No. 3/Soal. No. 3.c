/*
Kelompok 9 :
- Robby Ulung Pambudi 
- Fathin Muhashibi Putra
- M. Armand Giovani

DESKRIPSI :
Heap disimpan dalam array integer satu dimensi num[1..n] dengan nilai terbesar di posisi 1. 
Berikan algoritma efisien yang menghapus root dan mengatur ulang elemen lainnya
sehingga heap sekarang menempati num[1] hingga num[n-1].

PENYELESAIAN :

*/

// Fungsi utama untuk menjalankan heapSort
void heapSort(int arr[], int n)
{
    // Bangun max heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Heap sort
    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);

        // Heapify root element untuk mendapatkan elemen terbesar di root
        heapify(arr, i, 0);
    }
}
