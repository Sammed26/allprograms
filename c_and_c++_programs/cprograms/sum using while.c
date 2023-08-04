#include<stdio.h>
int main()
{
    int num, i,sum;
    i = 1;
    sum = 0;
    printf("enter 10 numbers\n");

    while(i<11)
    {
        scanf("%d",&num);

        sum = sum + num;
        i++;

    }

    printf("the sum is %d\n",sum);

    return 0;

}
