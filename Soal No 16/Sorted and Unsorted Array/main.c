/*
Nama Kelompok :
1. Robby Ulung Pambudi
2. M. Armand Giovani
3. Fathin Muhashibi Putra
*/

/*
Deskripsi :
Mencari dan menghapus nilai yang telah ditentukan sesuai algoritma Sorted dan Unsorted Array

*/

#include <stdio.h>
#include <time.h>

// Buat fungsi untuk mencari nilai yang terdekat dari X
int search(int arr[], int n, int min, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x && arr[i] <= min)
        {
            min = arr[i];
        }
    }
    return min;
}
// Function to deleted sorted array
void deleted(int arr[], int n, int num)
{
    int i;
    for (i = num - 1; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{

    // Setting Clock number
    clock_t start, end;
    FILE *out;
    out = fopen("output.txt", "w");

    // Setting Array
    int arr[10000];
    int n;

    printf("Masukkan jumlah elemen : ");
    scanf("%d", &n);
    if (n == 0)
    { // Fungsi untuk mencetak pesan jika tidak ada ruang untuk menyimpan v.
        puts("Tidak ada elemen");
    }
    else
    {
        puts("Masukkan Data Array");
        for (int i = 0; i < n; i++)
        { // Fungsi untuk menambahkan nilai v ke heap.
            printf("Masukkan elemen ke-%d : ", i + 1);
            scanf("%d", &arr[i]);
        }
    }

    // Masukan Nilai x
    printf("Masukan nilai X yang akan dicari minimalnya : ");
    int x;
    scanf("%d", &x);

    // Search x
    start = clock();
    int hasil = search(arr, n, 10000, x);
    deleted(arr, n, hasil);
    end = clock();
    for (int i = 0; i < n; i++)
    {
        fprintf(out, "%d ", arr[i]);
    }
    fprintf(out, "Waktu yang dibutuhkan untuk mencari dan deleted nilai %d adalah %f detik", hasil, (double)(end - start) / CLOCKS_PER_SEC);
    printf("program Selesai \n");
}