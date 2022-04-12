/*
    Nama Kelompok :
    1. Robby Ulung Pambudi
    2. M. Armand Giovani
    3. Fathin Muhashibi Putra
*/

/* Deskripsi
Diketahui bahwa setiap bilangan dalam daftar n bilangan berbeda 
adalah antara 100 dan 9.999. Rancang metode yang efisien untuk 
menyortir angka.Ubah metode untuk mengurutkan daftar jika mungkin 
berisi nomor duplikat.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int data[10000];
    memset(data, -1, sizeof(data));

    FILE *in;
    in = fopen("input.txt", "r");
    int i = 0;
    int temp;
    while (!feof(in))
    {
        fscanf(in, "%d", &temp);
        data[temp] = temp;
    }
    fclose(in);
    // Print the array
    FILE *out;
    out = fopen("output.txt", "w");

    for (i = 0; i < 10000; i++)
    {
        if (data[i] != -1)
        {
            fprintf(out, "%d\n", data[i]);
        }
    }
}