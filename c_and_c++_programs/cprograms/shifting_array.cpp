#include <stdio.h>

void shift_and_insert(int array[10], int index, int *size, int element)
{
    int i = index;
    if (index == *size)
    {
        *size++;
        array[*size] = element;
    }
    else
    {
    while (i < *size)
    {
       array[index + 1] = array[index];
       i++;
    }
    }

}

void display(int arr[10], int size)
{
    printf("the elements in the array are\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int main()
{
    int array[10];
   /* int size;
    printf("enter the size of array\n");
    scanf("%d", &size); */

    array[0] = 26;
    array[1] = 5;
    array[2] = 6;
    array[3] = 7;
    array[4] = 76;
    int size;
    size = 5;
    int *s;
    s = &size;
    int index;
    printf("enter the index value where you want to insert element\n");
    scanf("%d", &index);

    shift_and_insert(array, index, s, 34);
    display(array, size);


    return 0;
}