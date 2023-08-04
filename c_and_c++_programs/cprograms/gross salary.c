#include <stdio.h>
int main()
{
    float B, D, H, T;
    /* B = basic salary, D = dearness allowance, H = home rent */

    printf("enter the basic salary of ramesh\n");
    scanf("%f", &B);

    D = (40*B)/100;
    H = (20*B)/100;
    T = B+D+H;

    printf("The total salary of ramesh is %f\n", T);

    return 0;

}
