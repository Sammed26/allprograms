#include <stdio.h>

void insertion_sort(int *array, int n)
{
    int i, j;
    
    for(i = 1; i<= n-1; i++)
    {
        int key = array[i];
        j = i - 1;
        while((j >= 0) && (array[j] > key))
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
    
}

void print(int *array, int n)
{
    for(int i = 0; i<n; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

int main()
{
    int array[10] = {23, 45, 2, 4, 1, 869, 56, 15, 32, 7};
    int n = sizeof(array)/sizeof(int);
    
    printf("n = %d\n", n);

    printf("Before sorting\n");
    print(array, n);

    insertion_sort(array, n);

    printf("after sorting\n");
    print(array, n);

    return 0;
}