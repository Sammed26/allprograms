#include <stdio.h>
int main()
{
    int n, i;
    int fact =1;
    printf("enter the number\n");
    scanf("%d",&n);

    for(i = 1; i<=n; i++)
    {
        fact = fact*i;

    }

    printf("factorial is %d\n",fact);

}
