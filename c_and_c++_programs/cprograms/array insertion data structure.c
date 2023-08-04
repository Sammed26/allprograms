#include <stdio.h>

void display(int marks[], int size)
{
    for(int i=0; i < size; i++)
    {
        printf("%d\n", marks[i]);
    }

}

int insert(int marks[], int size, int index, int element, int capacity)
{
    if(size >= capacity)
    {
        return 0;
    }

    else
    {
        for(int i = size-1; i >= index; i--)
        {
            marks[i+1] = marks[i];
        }
        marks[index] = element;
    }
}

int main()
{
    int marks[20] = {3, 5, 7};
    int size = 3, capacity = 20;
    printf("-------Before insertion-------\n");
    display(marks, size);
    int index = 2;
    int element = 34;
    size += 1;
    insert(marks, size, index, element, capacity);
    printf("-------after insertion-------\n");
    display(marks, size);

return 0;
}
