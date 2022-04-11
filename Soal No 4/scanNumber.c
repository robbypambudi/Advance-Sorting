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

void scanNumber(int arr[])
{
    int i, n;
    printf("Masukkan jumlah elemen : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Masukkan elemen ke-%d : ", i + 1);
        scanf("%d", &arr[i]);
    }
}