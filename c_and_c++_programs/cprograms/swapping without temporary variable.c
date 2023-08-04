#include <stdio.h>
int main ()
{
    int a, b;
    printf("enter the numbers a and b\n");
    scanf("%d%d", &a, &b);

    printf("numbers before swapping are %d and %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("numbers after swapping are %d and %d\n", a, b);

    return 0;

}
