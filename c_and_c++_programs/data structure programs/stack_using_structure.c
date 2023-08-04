#include <stdio.h>
#include <stdlib.h>

struct stack 
{
    int top;
    int size;
    int *array;
};

int isempty(struct stack *ptr)
{
    if(ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct stack *s;
    s->size = 20;
    s->top = -1;

    s->array = (int *)malloc(s->size * sizeof(int));

    if(isempty(s))
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("stack is not empty\n");
    }

    return 0;
}