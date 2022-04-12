/*
Nama Kelompok :
1. Robby Ulung Pambudi
2. M. Armand Giovani
3. Fathin Muhashibi Putra
*/

/*
Deskripsi :
Mencari dan menghapus nilai yang telah ditentukan sesuai algoritma Heapsort

*/

// Build a Heap from an Array with C

#include <time.h>
#include <stdio.h>

// swap function

void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

// Function to print the Heap as array

// will print as - 'message array[]\n'

void printArray(char message[], int arr[], int n, FILE *out)
{

    fprintf(out, "%s", message);

    for (int i = 0; i < n; ++i)
    {
        fprintf(out, "%d ", arr[i]);
    }

    fprintf(out, "\n");
}

// To heapify a subtree with node i as root

// Size of heap is n

void heapify(int arr[], int n, int i)
{
    int largest = i;            // Initialize largest as root
    int leftChild = 2 * i + 1;  // left child = 2*i + 1
    int rightChild = 2 * i + 2; // right child = 2*i + 2

    // If left child is greater than root

    if (leftChild < n && arr[leftChild] > arr[largest])
        largest = leftChild;

    // If right child is greater than new largest

    if (rightChild < n && arr[rightChild] > arr[largest])
        largest = rightChild;

    // If largest is not the root

    if (largest != i)
    {
        // swap root with the new largest

        swap(&arr[i], &arr[largest]);

        // Recursively heapify the affected sub-tree i.e, subtree with root as largest
        heapify(arr, n, largest);
    }
}

// Function to build a Max-Heap from a given array

void buildHeap(int arr[], int n)
{
    // Index of last non-leaf node
    int lastNonLeafNode = (n / 2) - 1;

    // Perform level order traversal in reverse from last non-leaf node to the root node and heapify each node
    for (int i = lastNonLeafNode; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
}
int find(int *arr, int n, int number)
{
    int data = 10000;
    int temp = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] >= number && arr[i] <= data)
        {
            data = arr[i];
            temp = i;
        }
    }
    return temp;
}

// Driver Code

// Romeve value form array
void removee(int arr[], int n, int value)
{
    int data = find(arr, n, value);
    printf("%d\n", data);
    int i;
    for (i = data; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    // Start
    clock_t start, end;

    // Array
    int arr[1000];
    FILE *in;
    in = fopen("input.txt", "r");
    int i = 0;
    while (!feof(in))
    {
        fscanf(in, "%d", &arr[i]);
        i++;
    }

    // Size of array
    FILE *out;
    out = fopen("output.txt", "w");

    printArray("Array is : ", arr, i, out);

    buildHeap(arr, i);
    start = clock();
    printArray("Array representation of Heap is : ", arr, i, out);
    printf("Masukan angka yang ingin dicari : ");
    int h;
    scanf("%d", &h);

    removee(arr, i, h);
    end = clock();
    printArray("Array representation of Heap after removing : ", arr, i, out);
    fprintf(out, "Waktu yang dibutuhkan : %f\n", (double)(end - start) / CLOCKS_PER_SEC);
}