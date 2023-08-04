#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("sample.c", "r");
    char c = fgets(ptr);
    printf("the character i read is %c\n", c);






return 0;
}
