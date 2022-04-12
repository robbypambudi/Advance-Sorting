#include "header.h"

// Funtion to given a list of words in wordArr[],
void printAnagramsTogether(char *wordArr[], int size)
{
    // Step 1: Create a copy of all words present in given
    // wordArr. The copy will also have original indexes of
    // words
    struct DupArray *dupArray = createDupArray(wordArr, size);

    // Step 2: Iterate through all words in dupArray and
    // sort individual words.
    int i;
    for (i = 0; i < size; ++i)
        qsort(dupArray->array[i].str,
              strlen(dupArray->array[i].str), sizeof(char),
              compChar);

    // Step 3: Now sort the array of words in dupArray
    qsort(dupArray->array, size, sizeof(dupArray->array[0]),
          compStr);

    // Step 4: Now all words in dupArray are together, but
    // these words are changed. Use the index member of word
    // struct to get the corresponding original word
    for (i = 0; i < size; ++i)
        printf("%s ", wordArr[dupArray->array[i].index]);
}