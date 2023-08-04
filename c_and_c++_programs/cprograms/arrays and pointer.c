#include <stdio.h>
int main()
{
    int arr[5]={23,43,56,78,98};
    int *a;

    a = &arr[0];

    for(int i; i<5; i++)
    {

        printf("the %d element of an array is %d\n", i, arr[i]);
         printf("the %d element of an array is %d\n", i, *a);
        a = (&arr[i]+1);

    }
    //printf("the 3 element of an array is %d\n", arr[3]);




}
