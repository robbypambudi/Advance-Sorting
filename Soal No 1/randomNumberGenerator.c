#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num;
    int input;
    // Create input.txt file
    FILE *in = fopen("input.txt", "w");
    printf("Masukaan banyak bilangan : ");
    scanf("%d", &input);

    if (input <= 0)
    {
        printf("Banyak bilangan tidak boleh kurang dari 1\n");
        exit(1);
    }

    for (i = 0; i < input; i++)
    {
        num = rand() % input;
        fprintf(in, "%d\n", num);
    }
    fclose(in);
    printf("Program berhasil menulis ke file input.txt\n");
}
