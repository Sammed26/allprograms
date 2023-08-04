#include <stdio.h>
#include <string.h>

int main(int argc , char * argv[])
{
    char * operation;
    int num1, num2;
  //  operation = argv[l];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);
    printf("the operation is %s\n", operation);
    printf("the num1 is %d\n", num1);
    printf("the num2 is %d\n", num2);

    if(strcmp(operation, "add") == 0)
    {
        printf("the sum is %d\n", num1 + num2);
    }

    else if(strcmp(operation, "subtract") == 0)
    {
        printf("the subtraction is %d\n", num1 - num2);
    }

    else if(strcmp(operation, "multiply") == 0)
    {
        printf("the product is %d\n", num1 * num2);
    }

    else if(strcmp(operation, "divide") == 0)
    {
        printf("the product is %d\n", num1 / num2);
    }


return 0;
}
