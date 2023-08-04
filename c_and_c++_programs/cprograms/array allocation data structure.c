#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct ARRAY
{
    int Total_size;
    int Used_size;
    int *ptr;
};

void createarray(struct ARRAY * a, int tsize, int usize)
{
    (*a).Total_size = tsize;
    (*a).Used_size = usize;
    (*a).ptr = (int*)malloc(tsize * sizeof(int));

}

int setvalue(struct ARRAY *a)
{
    for(int i = 0; i<(*a).Used_size; i++)
    {
        int n;
        n = (*a).ptr[i];
        printf("enter %d th term in array\n", i);
        scanf("%d", &n);
    }


int show(struct ARRAY *a)
{
    for(int i=0; i < (*a).Used_size; i++)
    {
       printf("the %d th element is %d\n", i, (*a).ptr[i]);
    }
}


int main()
{
    struct ARRAY marks;
    createarray(&marks, 10, 3);

    printf("setvalue is running\n");
    setvalue(&marks);

    printf("show is running\n");
    show(&marks);

return 0;
}
