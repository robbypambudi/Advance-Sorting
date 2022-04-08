#include <stdio.h>
#include <time.h>

void insertionSort(int *, int);

int main()
{
    int i,num,array[1000];

    FILE *fp = fopen("input100000.txt","r");

    fscanf(fp,"%d",&num); 

    if(fp== NULL)
    {
        printf("Error reading File!\n");
        return;
    }  

    while(!feof(fp))
    { 
        fscanf(fp,"%d", &array[num]);
        //printf("%d\n", array[num]);
    }

    insertionSort(array,num);

    for(i=0;i<num;i++)
        printf("%d\n",&array[i]);

    fclose(fp);

    return 0;
}

/* Sorting Routine Begins */

void insertionSort(int *value, int size)
{
    int i,j,temp;

    for(i = 0; i <= size; i++)
    {
        for(j = i; j >= 0; j--)
        {
            if(value[j+1]<value[j])
            {
                temp=value[j+1];
                value[j+1]=value[j];
                value[j]=temp;
            }
            else
                break;
        }
    }
}
