#include <stdio.h>

void   swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 4, y = 7;
    printf("the value of x is %d and y is %d\n", x , y);
    swap(&x, &y);
    printf("the value of x is %d and y is %d\n", x , y);

    return 0;
}#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *array;
};

/*
int isempty(struct stack *p)
{
    if (p->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(struct stack *p)
{
    if (p->top == p->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
*/

int push(struct stack *ptr, int value, struct stack *top, struct stack *size)
{
    if(*top == (*size - 1))
    {
        printf("stack is full\n");
    }
    else
    {
        *top++;
        ptr->array[*top] = value;
    }
    return 0;
}

void display(struct stack *ptr)
{
    int i;
    for(i = 0; i <= (ptr->top); i++)
    {
        printf("%d\n",ptr->array[i]);
    }
}

int main()
{
    struct stack *s;
    s->size = 30;
    s->top = -1;
    s->array = malloc(s->size * sizeof(int));
    push(s, 26, s->top, s->size);
    display(s);


    return 0;
}