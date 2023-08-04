#include <stdio.h>

void name(char);

void main()
{

    char str[10];

    name(str[10]);
    printf("your name is \n");


}

void name(char)
{
   printf("enter your name\n");
   scanf("%s", &str[10]);

   printf("your name is %s", str[10]);



}





