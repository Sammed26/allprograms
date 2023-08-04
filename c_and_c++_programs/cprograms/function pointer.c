#include <stdio.h>

int factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }

    else
    {
        return n*factorial(n-1);
    }

}

int main()
{
    int num, fact;
    printf("enter the number\n");
    scanf("%d", &num);

    fact = factorial(num);

    printf("the factorial of %d is %d\n", num, fact);

    int (*ptr) (int);

    ptr = &factorial;

    int f = (*ptr)(num);
    printf("the factorial using function pointer is %d\n", f);


return 0;
}
