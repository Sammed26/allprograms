#include <stdio.h>

int main()
{
    int array[] = {2, 1, 0, 2, 2, 0, 2, 1, 2, 0};
    
    int size = sizeof(array)/sizeof(int);
    int total_1 = 0;
    int total_2 = 0;
    int total_0 = 0;

    for(int i = 0; i<size; i++)
    {
        if(array[i] == 0)
        {
            total_0++;
        }
        if(array[i] == 1)
        {
            total_1++;
        }
        if(array[i] == 2)
        {
            total_2++;
        }
    }

    int j = 0;
    for(j = 0; j<total_0; j++)
    {
        array[j] = 0;
    }
    for(j; j<(total_0 + total_1); j++)
    {
        array[j] = 1;
    }
    for(j; j<size; j++)
    {
        array[j] = 2;
    }

    printf("printing sorted array---\n");
    for(int k = 0; k<size; k++)
    {
        printf("%d ", array[k]);
    }

    return 0;
}