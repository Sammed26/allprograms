#include <stdio.h>
int func(int array[])
{


    int i;
    for(i=0;i<6;i++);
    {
        printf("the value at %d is %d\n",i, array[i]);
    }
//    return arr[i];
}



int main ()
{   int i;
    int arr[] = {2,4,5,6,3,4};

    func(arr[i]);
    return 0;



}
