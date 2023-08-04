#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter the size of first employee id\n");
    scanf("%d", &n);
    int* e1;
    printf("for first employee\nenter id\n");
    e1 = (char*)malloc(n*sizeof(char));

    scanf("%s", e1);
    printf("%s\n",e1);


    printf("enter the size of second employee id\n");
    scanf("%d", &n);
    int* e2;
    printf("for second employee\nenter id\n");
    e2 = (char*)realloc(e1,n*sizeof(char));

    scanf("%s", e2);
    printf("%s\n",e2);


    printf("enter the size of third employee id\n");
    scanf("%d", &n);
    int* e3;
    printf("for third employee\nenter id\n");
    e3 = (char*)realloc(e2,n*sizeof(char));

    scanf("%s", e3);
    printf("%s\n",e3);

    free(e3);


return 0;
}
