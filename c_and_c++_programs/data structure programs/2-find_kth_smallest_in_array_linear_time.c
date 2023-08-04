#include <stdio.h>

int main()
{
    int array[] = {102, 12, 23, 34, 45, 56, 67, 78, 89, 100};
    int size = sizeof(array)/sizeof(int);

    int minindex = 0;
    for(int i = 1; i<size; i++)
    {
        if(array[minindex] > array[i])
        {
           minindex = i;
        }
    }

    printf("smallest element is %d found at index %d\n", array[minindex], minindex);


    return 0;
}