#include "header.h"

void split(int a[], int mid, int l, int r, int *ll, int *rr)
{
    int i, j;
    i = j = (l + r) / 2;
    while (a[i] == mid)
    {
        i--;
    }
    *ll = i + 1;
    while (a[j] == mid)
    {
        j++;
    }
    *rr = j - 1;
}