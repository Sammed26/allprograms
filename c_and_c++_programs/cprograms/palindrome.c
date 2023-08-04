#include <stdio.h>
#include <string.h>

int n;
void palindrome(char stringg[n])
{

int i=0;


    if(stringg[i] == stringg[(n-1)-i] )

    {
        printf("the given string is a palindrome\n");
        i++;
    }



    else
    {
        printf("the string is not a palindrome\n");
    }
}


int main()
{
    //int n;
    int* p;
    printf("enter numbers of characters in your string\n");
    scanf("%d", &n);

    p = (char*)malloc(n*sizeof(char));
    char str[n];

    printf("enter the string\nplease not give underscores\n");
    scanf("%s", str);



    palindrome(str);


return 0;
}
