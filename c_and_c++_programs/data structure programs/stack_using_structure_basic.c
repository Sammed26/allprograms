#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int *array;
};

void display(int array[90], int top)
{
    for(int i=0; i<=top; i++)
    {
        printf("%d\n", array[i]);
    }
}

void push(int array[90], int element, int size, int top)
{
    if(top == (size - 1))
    {
        printf("array is FULL\n");
    }
    else
    {
        top = top + 1;
        array[top] = element;
    }
}

int main()
{
    struct stack s;
    s.top = -1;

    printf("enter the size of stack\n");
    scanf("%d", &s.size);

    s.array = (int *)malloc(s.size*sizeof(int));
    push(s.array, 56, s.size, s.top);
    display(s.array, s.top);
    

    return 0;
}