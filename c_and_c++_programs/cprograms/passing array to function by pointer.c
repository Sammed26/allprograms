#include <stdio.h>

int display(int* arr[])
{
    for(int i=0; i<5; i++)
    {
    printf("the marks of student of %d is %d\n", i, arr[i]);

    //arr[i]=(arr[0])+i;
    arr[i] = arr[i]+1;
    }
    return 0;
}


int main()
{
    int marks[5];
    int i;
    printf("enter the marks of 5 students\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &marks[i]);
    }

return display(marks);

}
