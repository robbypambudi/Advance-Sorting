#include "header.h"


// Driver code
int main()
{

    int k, x;
    scanf("%d", &x);
    scanf("%d", &k);
    int arr[x];
    int Arr2[k + 1];
    int Arr3[x - k + 1];
    int i;
    for (i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < x; i++)
    {
        if (i <= k)
        {
            Arr2[i] = arr[i];
        }
        else
            Arr3[i - k - 1] = arr[i];
    }
    // int n = sizeof(Arr2) / sizeof(Arr2[0]);

    // int m = sizeof(Arr3) / sizeof(Arr3[0]);
    // printf("%d\n", n);
    // printf("%d\n", m);

    int merged[x];
    mergeHeaps(merged, Arr2, Arr3, k + 1, x - k - 1);

    for (i = 0; i < x; i++)
        printf("%d ", merged[i]);

    return 0;
}