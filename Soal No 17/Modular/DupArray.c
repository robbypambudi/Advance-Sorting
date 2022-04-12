#include "header.h"

// Function to create a DupArray object that contains an array of Words
struct DupArray *createDupArray(char *str[], int size)
{
    // Allocate memory for dupArray and all members of it
    struct DupArray *dupArray = (struct DupArray *)malloc(sizeof(struct DupArray));
    dupArray->size = size;
    dupArray->array = (struct Word *)malloc(
        dupArray->size * sizeof(struct Word));

    // One by one copy words from the given wordArray to
    // dupArray
    int i;
    for (i = 0; i < size; ++i)
    {
        dupArray->array[i].index = i;
        dupArray->array[i].str = (char *)malloc(strlen(str[i]) + 1);
        strcpy(dupArray->array[i].str, str[i]);
    }

    return dupArray;
}
