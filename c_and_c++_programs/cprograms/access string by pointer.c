#include <stdio.h>
int main()
{
    char str[6];
    str[6] = "sammed";

    char *p ;
    p = &str[6];

    //*(p+1);
    for(int i =0; i<6; i++)
    {
        printf("string is : %s", *(p+i));
    }

    return 0;

}
