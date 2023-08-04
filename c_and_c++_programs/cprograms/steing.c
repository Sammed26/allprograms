#include <stdio.h>

int printstr(char str[10])
{
    char str;
    gets(str);
    for(int i=0; i<'\0'; i++)
    {
       puts(str);

    }

}


void main()
{
    char name[10];
    printf("enter the string\n");
    //gets(name);
    printstr(name);
    puts(name);
    printf("the string is = %s\n", name);


}
