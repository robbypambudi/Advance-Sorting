#include "header.h"

int main()
{
    int n;
    int arr[10000];
    int left[10000];
    int right[10000];

    // Scaning Number
    printf("Masukkan jumlah elemen : ");
    scanf("%d", &n);
    if (n == 0)
    { // Fungsi untuk mencetak pesan jika tidak ada ruang untuk menyimpan v.
        puts("Tidak ada elemen");
    }
    else
    {
        for (int i = 0; i < n; i++)
        { // Fungsi untuk menambahkan nilai v ke heap.
            printf("Masukkan elemen ke-%d : ", i + 1);
            scanf("%d", &arr[i]);
        }
    }
    sort(arr, left, right, n);

    // Print array left
    printf("Left : ");
    for (int i = 0; i < n / 2; i++)
    {
        printf("%d ", left[i]);
    }
    printf("\n");
    // Print array right
    printf("Right : ");
    for (int i = n / 2; i < n; i++)
    {
        printf("%d ", right[i - n / 2]);
    }
    printf("\n");
}