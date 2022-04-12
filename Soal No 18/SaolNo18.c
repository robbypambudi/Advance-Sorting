// Quick sort in C

#include <stdio.h>

// function to swap elements
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// function to find the partition position
int partition(int array[], int low, int high, int *jumlahSwap)
{

    // select the rightmost element as pivot
    int pivot = array[high];

    // pointer for greater element
    int i = (low - 1);

    // traverse each element of the array
    // compare them with the pivot
    for (int j = low; j < high; j++)
    {
        if (array[j] < pivot)
        {

            // if element smaller than pivot is found
            // swap it with the greater element pointed by i
            i++;

            // swap element at i with element at j
            swap(&array[i], &array[j]);
            printf("(%d , %d) ", i, j);
            *jumlahSwap += 1;
        }
    }

    // swap the pivot element with the greater element at i
    swap(&array[i + 1], &array[high]);
    printf("(%d , %d) ", i + 1, high);
    *jumlahSwap += 1;

    // return the partition point
    return (i + 1);
}

void quickSort(int array[], int low, int high, int *jumlahSwap)
{
    if (low < high)
    {

        int pi = partition(array, low, high, jumlahSwap);

        // recursive call on the left of pivot
        quickSort(array, low, pi - 1, jumlahSwap);

        // recursive call on the right of pivot
        quickSort(array, pi + 1, high, jumlahSwap);
    }
}

// function to print array elements
void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

// main function
int main()
{

    int data[1000];
    int n;

    // Scanner Number
    printf("Masukkan jumlah data : ");
    scanf("%d", &n);
    printf("Masukan data : ");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &data[i]);
    }

    int jumlahSwap;

    // perform quicksort on data
    quickSort(data, 0, n - 1, &jumlahSwap);
    printf("\nJumlah Swap Sebanyak : %d\n", jumlahSwap);

    printf("\nSorted array in ascending order: \n");
    printArray(data, n);
}