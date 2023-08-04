#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* p;
    int i, n;

    printf("enter the size that you want to allocate\n");
    scanf("%d", &n);

    printf("using malloc\n");
    p = (int*)malloc(n*sizeof(int));
    printf("enter the numbers\n");

    for(i=0; i<n; i++)
    {
        scanf("%d", &p[i]);
    }

    for(i=0; i<n; i++)
    {
        printf("the value at %d index is %d \n", i, p[i]);
    }

  /*  printf("using calloc\n");
    p = (int*)calloc(n,sizeof(int));
    printf("enter the numbers\n");

    for(i=0; i<n; i++)
    {
        scanf("%d", &p[i]);
    }

    for(i=0; i<n; i++)
    {
        printf("the value at %d index is %d \n", i, p[i]);
    }*/

    printf("using relloc\n");
    int* c;


    printf("enter the new size\n");
    scanf("%d", &n);

    printf("enter values\n");
    c = (int*)realloc(p, n*sizeof(int));


    for(i=0; i<n; i++)
    {
        scanf("%d", &p[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("the value at %d index is %d\n",i,p[i]);
    }

return 0;
}
