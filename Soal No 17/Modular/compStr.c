#include "header.h"

// Function to compare two words. Used in qsort() for sorting an array of words
int compStr(const void *a, const void *b)
{
    struct Word *a1 = (struct Word *)a;
    struct Word *b1 = (struct Word *)b;
    return strcmp(a1->str, b1->str);
}