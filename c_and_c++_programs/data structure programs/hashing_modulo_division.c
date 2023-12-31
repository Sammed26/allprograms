#include <stdio.h>

void modulo_division_hashing(int array[10], int element, int size)
{
    int index = element % size;
    if(array[index] == -1)
    {
        array[index] = element;
    }
    else
    {
        while (array[index] != -1)
        {
            index = (index + 1)%size;
        }
        array[index] = element;
    }

}

int search_by_hashing(int array[10], int element, int size)
{
    int index = element % size;

    if(array[index] == element)
    {
        printf("element found at index %d\n", index);
    }
    else
    {
        while (array[index] != element)
        {
            index = (index + 1)%size;
        }
        printf("element found at index %d\n", index);
    }
    if(element != array[index])
    {
        printf("element not found\n");
    }

}

int main()
{
    int array[10];

    for(int i= 0; i< 10; i++)
    {
        array[i] = -1;
    }

    modulo_division_hashing(array, 59, 10);
    modulo_division_hashing(array, 14, 10);
    modulo_division_hashing(array, 3652, 10);
    modulo_division_hashing(array, 5, 10);
    modulo_division_hashing(array, 9, 10);
    modulo_division_hashing(array, 591, 10);
    modulo_division_hashing(array, 59, 10);
    modulo_division_hashing(array, 78, 10);
    modulo_division_hashing(array, 39, 10);
    modulo_division_hashing(array, 44, 10);

    for(int j= 0; j< 10; j++)
    {
        printf("%d\n", array[j]);
    }

    search_by_hashing(array, 39, 10);

    return 0;
}