#include "header.h"

int modes, num;

int main()
{
    // O(n*log(n))= time complexity
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int med = median(arr, 0, n - 1);
    quicksort(arr, 0, n - 1);
    findmodes(arr, 0, n - 1);
    int mode = modus(arr, 0, n - 1);
    int max = maxi(arr, 0, n - 1);
    int min = mini(arr, 0, n - 1);
    double mean = meann(arr, 0, n - 1);
    printf("the smallest is %d\n", min);
    printf("the largest is %d\n", max);
    printf("the mean is %lf\n", mean);
    printf("the median is %d\n", med);
    printf("the mode is %d\n", mode);
}