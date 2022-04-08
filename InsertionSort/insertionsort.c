// C program for insertion sort
#include <math.h>
#include <stdio.h>
#include <time.h>

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// A utility function to print an array of size n
void createArray(int arr[], int n, int sat)
{
    FILE *output;
    if (sat == 1)
    {
        output = fopen("output_10.txt", "w");
        for (int i = 0; i < n; i++)
        {
            fprintf(output, "%d\n", arr[i]);
        }
    }
    else if (sat == 2)
    {
        output = fopen("output_100.txt", "w");
        for (int i = 0; i < n; i++)
        {
            fprintf(output, "%d\n", arr[i]);
        }
    }
    else if (sat == 3)
    {
        output = fopen("output_1000.txt", "w");
        for (int i = 0; i < n; i++)
        {
            fprintf(output, "%d\n", arr[i]);
        }
    }
    else if (sat == 4)
    {
        output = fopen("output_10000.txt", "w");
        for (int i = 0; i < n; i++)
        {
            fprintf(output, "%d\n", arr[i]);
        }
    }
    else if (sat == 5)
    {
        output = fopen("output_100000.txt", "w");
        for (int i = 0; i < n; i++)
        {
            fprintf(output, "%d\n", arr[i]);
        }
    }
    fclose(output);
}
void scaningNumber(int *arr, FILE *fptr, int *n)
{

    int i = 0;
    while (fscanf(fptr, "%d", &arr[i]) == 1)
    {
        // printf("%d\n", arr[i]);
        i++;
        *n += 1;
    }
}

/* Driver program to test insertion sort */
int main()
{

    int arr[100000];
    int n;
    // Setting variabel FIle
    FILE *in;

    // Seting Variable time
    clock_t start, end;

    FILE *kesimpulan = fopen("kesimpulan.txt", "w");

    // Untuk 10 data
    in = fopen("input10.txt", "r");
    scaningNumber(arr, in, &n);
    start = clock();
    insertionSort(arr, n);
    end = clock();
    createArray(arr, n, 1);
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    fprintf(kesimpulan, "10 Data memakan waktu selama : %f ms\n", time_spent);
    fclose(in);

    // Untuk 100 data
    n = 0;
    in = fopen("input100.txt", "r");
    scaningNumber(arr, in, &n);
    start = clock();
    insertionSort(arr, n);
    end = clock();
    createArray(arr, n, 2);
    time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    fprintf(kesimpulan, "100 Data memakan waktu selama : %f ms\n", time_spent);
    fclose(in);

    // Untuk 1000 data
    n = 0;
    in = fopen("input1000.txt", "r");
    scaningNumber(arr, in, &n);
    start = clock();
    insertionSort(arr, n);
    end = clock();
    createArray(arr, n, 3);
    time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    fprintf(kesimpulan, "1000 Data memakan waktu selama : %f ms\n", time_spent);
    fclose(in);

    // Untuk 10000 data
    n = 0;
    in = fopen("input10000.txt", "r");
    scaningNumber(arr, in, &n);
    start = clock();
    insertionSort(arr, n);
    end = clock();
    createArray(arr, n, 4);
    time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    fprintf(kesimpulan, "10000 Data memakan waktu selama : %f ms\n", time_spent);
    fclose(in);

    // Untuk 100000 data
    n = 0;
    in = fopen("input100000.txt", "r");
    scaningNumber(arr, in, &n);
    start = clock();
    insertionSort(arr, n);
    end = clock();
    createArray(arr, n, 5);
    time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    fprintf(kesimpulan, "100000 Data memakan waktu selama : %f ms\n", time_spent);
    fclose(in);

    fclose(kesimpulan);

    return 0;
}