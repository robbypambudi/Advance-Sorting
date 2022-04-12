/*
Nama Kelompok :
1. Robby Ulung Pambudi
2. M. Armand Giovari
3. Fathin Muhashibi Putra
*/

/*
Deskripsi :
Tulis insertion sort menggunakan pencarian biner untuk menentukan posisi di mana A[j] akan berada
disisipkan di antara sublist A[1..j-1] yang diurutkan.
*/

#include <stdio.h>

// iterative implementation
int binarySearch(int a[], int item, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (item == a[mid])
            return mid + 1;
        else if (item > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }

    return low;
}

// Function to sort an array a[] of size 'n'
void insertionSort(int a[], int n)
{
    int i, loc, j, k, selected;

    for (i = 1; i < n; ++i)
    {
        j = i - 1;
        selected = a[i];

        // find location where selected should be inseretd
        loc = binarySearch(a, selected, 0, j);

        // Move all elements after location to create space
        while (j >= loc)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = selected;
    }
}

// Scanner Number
void scanNumber(int *arr, int *n)
{
    FILE *in;
    in = fopen("input.txt", "r");
    int i = 0;
    int temp;
    while (!feof(in))
    {
        fscanf(in, "%d", &temp);
        arr[i] = temp;
        i++;
    }
    *n = i;
    fclose(in);
}

// Driver Code
int main()
{
    int a[100000];
    int n, i;
    scanNumber(a, &n);

    insertionSort(a, n);

    FILE *out;
    out = fopen("output.txt", "w");
    fprintf(out, "Sorted Array : \n");
    for (i = 0; i < n; i++)
        fprintf(out, "%d\n", a[i]);

    return 0;
}
// contributed by tmeid
