#include <stdio.h>
int display(int *arr)
{
    int sum=0;
    for(int i=0; i<4; i++)
    {
        scanf("%d",arr);
        sum = sum+(*arr);


    }


    for(int j=0; j<4; j++)
    {
    printf("the marks of %d student is %d\n",j, *arr);

    }

    printf("the sum is %d\n", sum);
    return 0;
}

int main()
{
    int marks[4];

    printf("enter the marks\n");
    display(marks);
    return 0;
}
