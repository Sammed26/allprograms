#include <stdio.h>
int main()
{
    int number[10],i;
    int *n;
    int num;
    n = &number[0];

    printf("enter 10 numbers\n");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &number[i]);
    }
    printf("printing elements.............\n");

    //for(int i=0; i<10; i++)
    //{
        printf("enter the value that you want to print\n");
        scanf("%d", &num);
        *(n+num);
        printf("%d\n", *(n+num));
        //*n++;
    //}

    printf("enter value for which you want to print numbers\n");

    scanf("%d",&num);
    printf("%d\n", number[num]);


 return 0;
}
