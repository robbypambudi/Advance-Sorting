#include <stdio.h>
#include <time.h>

void selectionSort(FILE *fptr, int sat)
{
    int i = 0, j, n = 0, min, index;

    // mendeklarasikan array untuk menyimpan data dari file
    int arr[100000];
    // membaca integer dari file menjadi array
    while (fscanf(fptr, "%d", &arr[i]) == 1)
    {

        // untuk menghitung banyaknya n (elemen) 
        n++;

        //untuk menambah (increment) indeks array
        i++;
    }
    for (i = 0; i < n - 1; i++)
    {
        min = arr[i];
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                index = j;
            }
        }

        // Menukar(swap) angka terkecil dengan nilai array[i] saat ini(current)
        int temp = arr[i];
        arr[i] = min;
        arr[index] = temp;
    }
    FILE *out;
    if (sat == 1)
    {
        out = fopen("output_10.txt", "w");
        for (i = 0; i < n; i++)
        {
            fprintf(out, "%d\n", arr[i]);
        }
    }

    else if (sat == 2)
    {
        out = fopen("output_100.txt", "w");
        for (i = 0; i < n; i++)
        {
            fprintf(out, "%d\n", arr[i]);
        }
    }
    else if (sat == 3)
    {
        out = fopen("output_1000.txt", "w");
        for (i = 0; i < n; i++)
        {
            fprintf(out, "%d\n", arr[i]);
        }
    }
    else if (sat == 4)
    {
        out = fopen("output_10000.txt", "w");
        for (i = 0; i < n; i++)
        {
            fprintf(out, "%d\n", arr[i]);
        }
    }
    else if (sat == 5)
    {
        out = fopen("output_100000.txt", "w");
        for (i = 0; i < n; i++)
        {
            fprintf(out, "%d\n", arr[i]);
        }
    }
    fclose(out);
}

int main()
{

    // tipe data untuk menghitung waktu 
    clock_t starttime, endtime;

    // variabel untuk menghitung total waktu penyelesaian program
    double totaltime;

    // mendeklrasikan pointer file
    FILE *fptr;
    FILE *kesimpulan = fopen("kesimpulan.txt", "w");

    // Mengurutkan 10 Data
    fptr = fopen("input10.txt", "r");
    starttime = clock();
    selectionSort(fptr, 1);
    endtime = clock();
    totaltime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC;
    fprintf(kesimpulan, "1. 10 data memakan waktu selama \t\t:\t %f ms\n", totaltime);
    fclose(fptr);

    // Mengurutkan 100 Data
    fptr = fopen("input100.txt", "r");
    starttime = clock();
    selectionSort(fptr, 2);
    endtime = clock();
    totaltime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC;
    fprintf(kesimpulan, "2. 100 data memakan waktu selama \t:\t %f ms\n", totaltime);
    fclose(fptr);

    // Mengurutkan 1000 Data
    fptr = fopen("input1000.txt", "r");
    starttime = clock();
    selectionSort(fptr, 3);
    endtime = clock();
    totaltime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC;
    fprintf(kesimpulan, "3. 1000 data memakan waktu selama \t:\t %f ms\n", totaltime);
    fclose(fptr);

    // Mengurutkan 10000 Data
    fptr = fopen("input10000.txt", "r");
    starttime = clock();
    selectionSort(fptr, 4);
    endtime = clock();
    totaltime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC;
    fprintf(kesimpulan, "4. 10000 data memakan waktu selama \t:\t %f ms\n", totaltime);
    fclose(fptr);

    // Mengurutkan 100000 Data
    fptr = fopen("input100000.txt", "r");
    starttime = clock();
    selectionSort(fptr, 5);
    endtime = clock();
    totaltime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC;
    fprintf(kesimpulan, "5. 100000 data memakan waktu selama \t:\t %f ms\n", totaltime);
    fclose(fptr);

    fclose(kesimpulan);

    // mencetak array yang telah diurutkan
    printf("\nData Berhasil di Sorting: \n");

    return 0;
}
