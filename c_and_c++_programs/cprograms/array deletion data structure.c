#include <stdio.h>

void display(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }

}

int deletion(int array[], int capacity, int size, int index)
{
    if(index > capacity)
    {
        return "impossible";
    }
    else
    {

    for(int i = index; i <= size-2; i++)
    {
        array[i] = array[i+1];
    }
    }
}

int main()
{

    int array[20] = {2, 9, 7, 6};
    int index = 1;
    int capacity = 20, size = 4;

    printf("-----before deletion-----\n");
    display(array, size);

    deletion(array, capacity, size, index);

    size -= 1;

    printf("-----after deletion-----\n");
    display(array, size);


return 0;
}
