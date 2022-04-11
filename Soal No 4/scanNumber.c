/*
Nama Kelompok :
1. Robby Ulung Pambudi
2. M. Armand Giovari
3. Fathin Muhashibi Putra
*/

/*
Deskripsi :

heap disimpan dalam array integer satu dimensi A[0..max] dengan nilai terbesar di posisi 1. A[0]
menentukan jumlah elemen di heap setiap saat. Tulis fungsi untuk menambahkan nilai baru v ke heap.
Fungsi Anda akan berfungsi jika heap awalnya kosong dan akan mencetak pesan jika tidak ada ruang
untuk menyimpan v.
*/

/*
Penyelesaain :
1. Membuat fungsi untuk menambahkan nilai v ke heap.
2. Membuat fungsi untuk mencetak pesan jika tidak ada ruang untuk menyimpan v.

*/

void scanNumber(int arr[], int *a)
{
    int i, n;
    printf("Masukkan jumlah elemen : ");
    scanf("%d", &n);
    if (n == 0)
    { // Fungsi untuk mencetak pesan jika tidak ada ruang untuk menyimpan v.
        puts("Tidak ada elemen");
    }
    else
    {
        for (i = 0; i < n; i++)
        { // Fungsi untuk menambahkan nilai v ke heap.
            printf("Masukkan elemen ke-%d : ", i + 1);
            scanf("%d", &arr[i]);
        }
    }
    *a = n;
}