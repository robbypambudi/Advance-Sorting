#include "header.h"

// Driver program to test above functions
int main()
{
    // Input name to char
    char *wordArr[] = {"teacher", "cheater", "sister", "resist"};
    int size = sizeof(wordArr) / sizeof(wordArr[0]);
    printAnagramsTogether(wordArr, size);
    return 0;
}
