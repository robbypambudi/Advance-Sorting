#include "header.h"

int main()
{

    int arr[100000];    // Variabel array untuk menampung data pada file input
    int n;
    // Menentukan variabel FIle
    FILE *in;

    // Menentukan Variable time
    clock_t start, end;

    FILE *kesimpulan = fopen("kesimpulan.txt", "w");

    // Untuk 10 data
    in = fopen("input10.txt", "r");
    scaningNumber(arr, in, &n);
    start = clock();
    // Sorted
    insertionSort(arr, n);
    end = clock();
    // Create sorted array
    createArray(arr, n, 1);
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    // Print time
    fprintf(kesimpulan, "10 Data memakan waktu selama : %f ms\n", time_spent);
    fclose(in);

    // Untuk 100 data
    n = 0;
    in = fopen("input100.txt", "r");
    scaningNumber(arr, in, &n);
    start = clock();
    // Sorted
    insertionSort(arr, n);
    end = clock();
    // Create sorted array
    createArray(arr, n, 2);
    time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    // Print time
    fprintf(kesimpulan, "100 Data memakan waktu selama : %f ms\n", time_spent);
    fclose(in);

    // Untuk 1000 data
    n = 0;
    in = fopen("input1000.txt", "r");
    scaningNumber(arr, in, &n);
    start = clock();
    // Sorted
    insertionSort(arr, n);
    end = clock();
    // Create sorted array
    createArray(arr, n, 3);
    time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    // Print time
    fprintf(kesimpulan, "1000 Data memakan waktu selama : %f ms\n", time_spent);
    fclose(in);

    // Untuk 10000 data
    n = 0;
    in = fopen("input10000.txt", "r");
    scaningNumber(arr, in, &n);
    start = clock();
    // Sorted
    insertionSort(arr, n);
    end = clock();
    // Create sorted array
    createArray(arr, n, 4);
    time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    // Print time
    fprintf(kesimpulan, "10000 Data memakan waktu selama : %f ms\n", time_spent);
    fclose(in);

    // Untuk 100000 data
    n = 0;
    in = fopen("input100000.txt", "r");
    scaningNumber(arr, in, &n);
    start = clock();
    // Sorted
    insertionSort(arr, n);
    end = clock();
    // Create sorted array
    createArray(arr, n, 5);
    time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    // Print time
    fprintf(kesimpulan, "100000 Data memakan waktu selama : %f ms\n", time_spent);
    fclose(in);

    fclose(kesimpulan);

    return 0;
}