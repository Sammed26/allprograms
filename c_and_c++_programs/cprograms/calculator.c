#include <stdio.h>
int main()
{
    int num1, num2;
    char operation, q;

    printf("enter relevant option\n +\n -\n *\n /\n q for quitting the program\n");
    scanf("%c", &operation);

    switch(operation)
    {
    case '+':

            printf("enter two values that you want to take as a operands\n");
            scanf("%d",&num1);
            scanf("%d",&num2);
            printf("the addition of two numbers %d and %d is %d\n", num1, num2, num1+num2);
        break;


    case '-':

            printf("enter two values that you want to take as a operands\n");
            scanf("%d",&num1);
            scanf("%d",&num2);
            printf("the subtraction of two numbers %d and %d is %d\n", num1, num2, num1-num2);
        break;


    case '/':

            printf("enter two values that you want to take as a operands\n");
            scanf("%d",&num1);
            scanf("%d",&num2);
            printf("the division of two numbers %d and %d is %d\n", num1, num2, num1/num2);
        break;

    case '*':
    printf("enter two values that you want to take as a operands\n");
            scanf("%d",&num1);
            scanf("%d",&num2);
            printf("the multiplication of two numbers %d and %d is %d\n", num1, num2, num1*num2);

    break;

    case 'q':

            printf("QUITTING\n");
        break;

    default:
        printf("please enter proper input\n");


     }
return 0;

}
