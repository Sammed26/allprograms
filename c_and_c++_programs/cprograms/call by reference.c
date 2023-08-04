#include <stdio.h>
int add(int *a, int *b)
{
    return *a + *b;

}

int main()
{
    int a, b, c;
    printf("enter two values\n");
    scanf("%d%d", &a,&b);
    c = add(&a,&b);
    printf("addition is %d\n", c);

    return 0;
}


