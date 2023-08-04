#include <stdio.h>
int main()
{
    /* int* a, b; only a is been declares as pointer not b, for that we need to
     make as int *a, *b;
     another way is using typedef */

     typedef int* intpointer;
    intpointer a, b;

    int c = 4, d =8;
    a = &c;
    b = &d;
    printf("the address of %d is %d\n", *a, a);
    printf("the address of %d is %d\n", *b, b);


return 0;
}
