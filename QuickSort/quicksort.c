// Quick sort in C

#include <stdio.h>
#include <time.h>

// function to swap elements
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// function to find the partition position
int partition(int array[], int low, int high)
{

    // select the rightmost element as pivot
    int pivot = array[high];

    // pointer for greater element
    int i = (low - 1);

    // traverse each element of the array
    // compare them with the pivot
    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {

            // if element smaller than pivot is found
            // swap it with the greater element pointed by i
            i++;

            // swap element at i with element at j
            swap(&array[i], &array[j]);
        }
    }

    // swap the pivot element with the greater element at i
    swap(&array[i + 1], &array[high]);

    // return the partition point
    return (i + 1);
}

void quickSort(int array[], int low, int high)
{
    if (low < high)
    {

        // find the pivot element such that
        // elements smaller than pivot are on left of pivot
        // elements greater than pivot are on right of pivot
        int pi = partition(array, low, high);

        // recursive call on the left of pivot
        quickSort(array, low, pi - 1);

        // recursive call on the right of pivot
        quickSort(array, pi + 1, high);
    }
}

/// A utility function to print an array of size n
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
    *n = 0;
    while (fscanf(fptr, "%d", &arr[i]) != EOF)
    {
        i++;
    }
    *n = i;
}
// main function
int main()
{
    int data[100000];
    int n = 0;
    FILE *in;
    FILE *kesimpulan = fopen("kesimpulan.txt", "w");

    // Seting variable Time
    clock_t start, end;
    // 10 Data
    in = fopen("input10.txt", "r");
    scaningNumber(data, in, &n);
    start = clock();
    quickSort(data, 0, n - 1);
    end = clock();
    createArray(data, n, 1);
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC; // in seconds
    fprintf(kesimpulan, "10 Data memakan waktu %f ms\n", time_taken);
    fclose(in);

    // 100 data
    in = fopen("input100.txt", "r");
    scaningNumber(data, in, &n);
    start = clock();
    quickSort(data, 0, n - 1);
    end = clock();
    createArray(data, n, 2);
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC; // in seconds
    fprintf(kesimpulan, "100 Data memakan waktu %f ms\n", time_taken);
    fclose(in);

    // 1000 data
    in = fopen("input1000.txt", "r");
    scaningNumber(data, in, &n);
    start = clock();
    quickSort(data, 0, n - 1);
    end = clock();
    createArray(data, n, 3);
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC; // in seconds
    fprintf(kesimpulan, "1000 Data memakan waktu %f ms\n", time_taken);
    fclose(in);

    // 10000 data
    in = fopen("input10000.txt", "r");
    scaningNumber(data, in, &n);
    start = clock();
    quickSort(data, 0, n - 1);
    end = clock();
    createArray(data, n, 4);
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC; // in seconds
    fprintf(kesimpulan, "10000 Data memakan waktu %f ms\n", time_taken);
    fclose(in);

    // 100000 data
    in = fopen("input100000.txt", "r");
    scaningNumber(data, in, &n);
    start = clock();
    quickSort(data, 0, n - 1);
    end = clock();
    createArray(data, n, 5);
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC; // in seconds
    fprintf(kesimpulan, "100000 Data memakan waktu %f ms\n", time_taken);
    fclose(in);

    fclose(kesimpulan);
    printf("Sorted Complete\n");
    return 0;
}