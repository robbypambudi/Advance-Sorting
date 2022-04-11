#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int data[10000];
    memset(data, -1, sizeof(data));

    FILE *in;
    in = fopen("input.txt", "r");
    int i = 0;
    int temp;
    while (!feof(in))
    {
        fscanf(in, "%d", &temp);
        data[temp] = temp;
    }
    fclose(in);
    // Print the array
    FILE *out;
    out = fopen("output.txt", "w");

    for (i = 0; i < 10000; i++)
    {
        if (data[i] != -1)
        {
            fprintf(out, "%d\n", data[i]);
        }
    }
}