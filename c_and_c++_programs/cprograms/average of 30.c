#include <stdio.h>
int main()
{
    int marks[30];
    int i, avg, sum=0;
    printf("enter the marks of 30 students\n");

    for(i=1; i<=30; i++)
    {
        scanf("%d", &marks[i]);

        sum = sum + marks[i];

    }
        avg = sum/30;
    printf("average of 30 students marks is %d\n",avg);

    return 0;

}
