#include <stdio.h>
#include <time.h>

void selectionSort(FILE *fptr, int sat)
{
    int i = 0, j, n = 0, min, index;

    // declaring array to store data from file
    int arr[100000];
    // scanning integer from file to array
    while (fscanf(fptr, "%d", &arr[i]) == 1)
    {

        // for counting the number of elements
        n++;

        // for incrementing the array index
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

        // swapping the smallest number with
        // the current arr[i]th value
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

    // data type for calculating time
    clock_t starttime, endtime;

    // variable for calculating total time of execution
    double totaltime;

    // declaring file pointer
    FILE *fptr;
    FILE *kesimpulan = fopen("kesimpulan.txt", "w");

    // Sorted 10 Data
    fptr = fopen("input10.txt", "r");
    starttime = clock();
    selectionSort(fptr, 1);
    endtime = clock();
    totaltime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC;
    fprintf(kesimpulan, "1. 10 data diporoleh waktu \t\t:\t %f ms\n", totaltime);
    fclose(fptr);

    // Sorted 100 Data
    fptr = fopen("input100.txt", "r");
    starttime = clock();
    selectionSort(fptr, 2);
    endtime = clock();
    totaltime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC;
    fprintf(kesimpulan, "2. 100 data diporoleh waktu \t:\t %f ms\n", totaltime);
    fclose(fptr);

    // Sorted 1000 Data
    fptr = fopen("input1000.txt", "r");
    starttime = clock();
    selectionSort(fptr, 3);
    endtime = clock();
    totaltime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC;
    fprintf(kesimpulan, "3. 1000 data diporoleh waktu \t:\t %f ms\n", totaltime);
    fclose(fptr);

    // Sorted 10000 Data
    fptr = fopen("input10000.txt", "r");
    starttime = clock();
    selectionSort(fptr, 4);
    endtime = clock();
    totaltime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC;
    fprintf(kesimpulan, "4. 10000 data diporoleh waktu \t:\t %f ms\n", totaltime);
    fclose(fptr);

    // Sorted 100000 Data
    fptr = fopen("input100000.txt", "r");
    starttime = clock();
    selectionSort(fptr, 5);
    endtime = clock();
    totaltime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC;
    fprintf(kesimpulan, "5. 100000 data diporoleh waktu \t:\t %f ms\n", totaltime);
    fclose(fptr);

    fclose(kesimpulan);
    // printing the sorted array...
    printf("\nData Berhasil di Sorting: \n");

    return 0;
}
