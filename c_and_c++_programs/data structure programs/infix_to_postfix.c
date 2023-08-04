#include <stdio.h>

int isoperator(char c)
{
    if(c == '+')
    {
        return 1;
    }
    else if(c == '-')
    {
        return 1;
    }
    else if(c == '*')
    {
        return 1;
    }
    else if(c == '/')
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int precidence(char c)
{
    if((c == '+') || (c == '-'))
    {
        return 1;
    }
   
    else if ((c == '*') || (c == '/'))
    {
        return 2;
    }
    else
    {
        return 0;
    }
    
}

int isoperand(char c)
{
    if((c != '+') || (c != '-') || (c != '*') || (c != '/'))
    {
        return 1;
    }

    else
    {
        return 0;
    }

}

void infix_to_postfix(char infix[30], char postfix[30], char operator_stack[30], int *topi, int *topp, int *topo)
{
    int i = 0, j = 0;
    while (infix[i] != '\0')
    {
        if(isoperand(infix[i]))
        {
            push(postfix, *topp, infix[i]);
        }
        else
        {
            if(precidence(infix[i]) > precidence(operator_stack[*topo]))
            {
                push(operator_stack, *topo, infix[i]);
            }
            else
            {
                char popped = pop(operator_stack, *topi);
                push(postfix, *topp, popped);
                push(operator_stack, *topo, infix[i]);
            }
        }
    }
    int k = 0;
    while (operator_stack[k] != '\0')
    {
        char ele = pop(operator_stack, *topo);
        push(postfix, *topp, ele);
    }
    push(operator_stack, *topo, '\0');
    
    
}

void push(char stack[30], int *top, char data)
{
    if(*top == (29))
    {
        printf("full\n");
    }
    else
    {
        *top = *top + 1;
        stack[*top] = data;
    }
}

char pop(char stack[30], int *top)
{
    if(stack[0] == '\0')
    {
        printf("empty\n");
    }
    else
    {
        char temp;
        temp = stack[*top];
        *top = *top - 1;
        return temp;
    }
}

int main()
{
    char postfix[30];
    char infix[30];
    char opearatorstack[30];
    int topinfix = -1;
    int toppostfix = -1;
    int topoperatorstack = -1;
    
    printf("enter expression in infix form\n");
    
    gets(infix);
    printf("you entered  : \n");
    puts(infix);
    
    infix_to_postfix(infix, postfix, opearatorstack, &topinfix, &toppostfix, &topoperatorstack);
    int i;
    for(i = 0; i<=toppostfix; i++)
    {
        printf("%c", postfix[i]);
    }
    
    return 0;
}