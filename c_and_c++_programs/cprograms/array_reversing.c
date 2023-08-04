#include <stdio.h>

void arrayrev(int arr[])
{
    int temp;
    for(int i=0; i<5/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[4-i];
        arr[4-i] = temp;
    }
}
int main()
{
    int arr[] = {23,42,45,64,34};
    printf("berfore reversing the array\n");
    for(int i=0; i<5; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("after reversing array\n");

    arrayrev(arr);
    for(int i=0; i<5; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }


return 0;
}
