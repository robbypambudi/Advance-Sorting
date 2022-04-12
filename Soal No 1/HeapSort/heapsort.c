// Heap Sort in C

#include <stdio.h>
#include <time.h>

// Function to swap the the position of two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int n, int i)
{
    // Find largest among root, left child and right child
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Swap and continue heapifying if root is not largest
    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

// Main function to do heap sort
void heapSort(int arr[], int n)
{
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Heap sort
    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);

        // Heapify root element to get highest element at root again
        heapify(arr, i, 0);
    }
}

// A utility function to print an array of size n
void printArray(int arr[], int n, int sat)
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
void scaningNumber(FILE *fptr, int *arr, int *n)
{

    int i = 0;
    while (fscanf(fptr, "%d", &arr[i]) == 1)
    {
        i++;
        *n += 1;
    }
}
// Driver code
int main()
{
    int arr[100000];
    int n = 0;
    FILE *in;
    FILE *kesimpulan;
    // Seting time variable
    clock_t starttime, endtime;

    // 10 Data
    in = fopen("input10.txt", "r");
    scaningNumber(in, arr, &n);
    starttime = clock();
    // Sorted
    heapSort(arr, n);
    endtime = clock();
    // Print sorted array
    printArray(arr, n, 1);
    // Print time
    kesimpulan = fopen("kesimpulan.txt", "a");
    fprintf(kesimpulan, "10 Data memakan waktu : %f\n", (double)(endtime - starttime) / CLOCKS_PER_SEC);
    fclose(in);

    // 100 Data
    n = 0;
    in = fopen("input100.txt", "r");
    scaningNumber(in, arr, &n);
    starttime = clock();
    // Sorted
    heapSort(arr, n);
    endtime = clock();
    // Print sorted array
    printArray(arr, n, 2);
    // Print time
    fprintf(kesimpulan, "100 Data memakan waktu : %f\n", (double)(endtime - starttime) / CLOCKS_PER_SEC);
    fclose(in);

    // 1000 data
    n = 0;
    in = fopen("input1000.txt", "r");
    scaningNumber(in, arr, &n);
    starttime = clock();
    // Sorted
    heapSort(arr, n);
    endtime = clock();
    // Print sorted array
    printArray(arr, n, 3);
    // Print time
    fprintf(kesimpulan, "1000 Data memakan waktu : %f\n", (double)(endtime - starttime) / CLOCKS_PER_SEC);
    fclose(in);

    // 10000 data
    n = 0;
    in = fopen("input10000.txt", "r");
    scaningNumber(in, arr, &n);
    starttime = clock();
    // Sorted
    heapSort(arr, n);
    endtime = clock();
    // Print sorted array
    printArray(arr, n, 4);
    // Print time
    fprintf(kesimpulan, "10000 Data memakan waktu : %f\n", (double)(endtime - starttime) / CLOCKS_PER_SEC);
    fclose(in);

    // 100000 data
    n = 0;
    in = fopen("input100000.txt", "r");
    scaningNumber(in, arr, &n);
    starttime = clock();
    // Sorted
    heapSort(arr, n);
    endtime = clock();
    // Print sorted array
    printArray(arr, n, 5);
    // Print time
    fprintf(kesimpulan, "100000 Data memakan waktu : %f\n", (double)(endtime - starttime) / CLOCKS_PER_SEC);
    fclose(in);

    fclose(kesimpulan);

    printf("Array is Sorted \n");
}