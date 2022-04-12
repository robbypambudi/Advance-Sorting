#include "header.h"

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
    fprintf(kesimpulan, "1. 10 Data memakan waktu selama \t\t:\t %f ms\n", totaltime);
    fclose(fptr);

    // Mengurutkan 100 Data
    fptr = fopen("input100.txt", "r");
    starttime = clock();
    selectionSort(fptr, 2);
    endtime = clock();
    totaltime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC;
    fprintf(kesimpulan, "2. 100 Data memakan waktu selama \t:\t %f ms\n", totaltime);
    fclose(fptr);

    // Mengurutkan 1000 Data
    fptr = fopen("input1000.txt", "r");
    starttime = clock();
    selectionSort(fptr, 3);
    endtime = clock();
    totaltime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC;
    fprintf(kesimpulan, "3. 1000 Data memakan waktu selama \t:\t %f ms\n", totaltime);
    fclose(fptr);

    // Mengurutkan 10000 Data
    fptr = fopen("input10000.txt", "r");
    starttime = clock();
    selectionSort(fptr, 4);
    endtime = clock();
    totaltime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC;
    fprintf(kesimpulan, "4. 10000 Data memakan waktu selama \t:\t %f ms\n", totaltime);
    fclose(fptr);

    // Mengurutkan 100000 Data
    fptr = fopen("input100000.txt", "r");
    starttime = clock();
    selectionSort(fptr, 5);
    endtime = clock();
    totaltime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC;
    fprintf(kesimpulan, "5. 100000 Data memakan waktu selama \t:\t %f ms\n", totaltime);
    fclose(fptr);

    fclose(kesimpulan);

    // mencetak array yang telah diurutkan
    printf("\nData Berhasil di Sorting: \n");

    return 0;
}