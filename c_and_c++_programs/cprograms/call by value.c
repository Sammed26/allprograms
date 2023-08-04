#include <stdio.h>
int operation(int x , int y)
{
    int a,b;
    printf("addition is %d\n", x+y);
    printf("subtraction is %d\n", x-y);

    a = x+y;
    b = x-y;
    printf("%d\n", a);
    printf("%d\n", b);

}
int main()
{
    int a,b;
    printf("enter the values of a and b\n");
    scanf("%d%d", &a, &b);
    operation(a,b);
    return 0;

}
