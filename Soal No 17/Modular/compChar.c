#include "header.h"

// Function to compare two characters. Used in qsort() for sorting an array of characters (Word)
int compChar(const void *a, const void *b)
{
    return *(char *)a - *(char *)b;
}