#include <stdio.h>
int main()
{
    void *ptr;
    int a=4;
    float b=5.5;
    char c = 's';

    ptr = &a;
    printf("the value of a is %d\n", (*(int*)ptr));
    printf("the size of a is %d bytes\n", sizeof(*(int*)ptr));

    ptr = &b;
    printf("the value of b is %f\n", (*(float*)ptr));
    printf("the size of b is %d bytes\n", sizeof(*(float*)ptr));


    ptr = &a;
    printf("the value of c is %c\n", (*(char*)ptr));
    printf("the size of c is %d bytes\n", sizeof(*(char*)ptr));

    printf("the size of void pointer is %d\n", sizeof(*ptr));

return 0;
}
