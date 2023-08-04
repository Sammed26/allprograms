#include <stdio.h>

void average(int a, int b)
{
    // return (a+b)/2; with argument with return value
    int c = (a+b)/2; // with argument without return value
}

int goodevening(int (*fptr)(int, int))
{
    printf("good evening user\n");
    printf("the average is %d\n", fptr(2,5));
}

int goodnight(int (*fptr)(int, int))
{
    printf("good night user\n");
    printf("the average is %d\n", fptr(2,5));
}

int main()
{
    int (*ptr)(int, int);
    ptr = average;

    goodevening(ptr);

return 0;
}
