#include <stdio.h>
int main(int argc , char *argv[])
{
    printf("the arguments are %d\n", argc);
    for(int i=0; i<argc; i++)
    {
        printf("the arguments are %s\n", argv[i]);
        i++;
    }

return 0;
}
