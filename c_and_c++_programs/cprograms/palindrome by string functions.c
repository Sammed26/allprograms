#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   // char* s = NULL;
   // int n;
   // printf("enter the size of your string\n");
  //  scanf("%d", &n);

   // s = (char*)malloc(n*sizeof(char));
    char str[50];
    gets(str);

    printf("the reversed string is %s\n", strrev(str));


    return 0;
}
