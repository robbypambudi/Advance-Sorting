#include "header.h"

void findmodes(int arr[], int l, int r)
{
    int ll, rr;
    int mid = median(arr, l, r);
    split(arr, mid, l, r, &ll, &rr);
    if (modes < rr - ll + 1)
    {
        modes = rr - ll + 1;
        num = mid;
    }
    else if (modes == rr - ll + 1)
    {
        if (mid > num)
        {
            num = mid;
        }
    }
    if (ll - l >= modes)
        findmodes(arr, l, ll - 1);
    if (r - rr >= modes)
        findmodes(arr, rr + 1, r);
}