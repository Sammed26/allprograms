#include <stdio.h>

void display(int array[], int size)
{
    for(int i = 0; i<size; i++)
    {
        printf("%d ", array[i]);
    }
}

void reverse_array(int array[], int size)
{
    int j = size-1;
    
        for(int k = 0; k<size/2; k++)
        {
            int temp;
            temp = array[k];
            array[k] = array[j];
            array[j] = temp;
            j--;
        }
    
}

int main()
{
    int array[] = { 2, 4, 8, 6, 98, 87, 47, 7, 32, 10, 485};
    int size = sizeof(array)/sizeof(int);

    printf("before reversing\n");
    display(array, size);
    printf("after reversing\n");
    reverse_array(array, 11);
    display(array, size);


    return 0;
}