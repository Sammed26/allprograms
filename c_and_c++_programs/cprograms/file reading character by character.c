#include <stdio.h>
void main()
{
    FILE *ptr=NULL;
    ptr = fopen("sample.c", "r");

    int ch;
    while((ch = fgetc(ptr)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(ptr);




}



