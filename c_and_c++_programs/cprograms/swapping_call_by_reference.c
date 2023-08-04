#include<stdio.h>

void swap(int *p, int *q)
{
    int *temp;
    temp = p;
    p = q;
    q = temp;

    printf("the numbers after swapping are 1st number = %d and 2nd number = %d\n", *p, *q);
}

int main()
{
    int num1 = 45, num2 = 80;
    int *ptr1;
    int *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    printf("the numbers before swapping are 1st number = %d and 2nd number = %d\n", *ptr1, *ptr2);
    swap(ptr1, ptr2);

    printf("num1 = %d\nnum2 = %d\n", num1, num2);
    return 0;
}