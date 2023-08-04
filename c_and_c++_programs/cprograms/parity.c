#include <stdio.h>
#include <string.h>

int main()
{
    char data[9];
    char parity[10];

    printf("enter data\n");
    gets(data);

    int counter = 0, even, i = 0;

    while(data[i] != '\0')
    {
        if(data[i] == '1')
        {
            counter++;
        }
        i++;
    }

    even = counter % 2;
    if(even == 0)
    {
        strcpy(parity, data);
        parity[8] = '0';
    }
    else
    {
        strcpy(parity, data);
        parity[8] = '1';
    }

    printf("after parity cheaking\n %s\n", parity);

    return 0;
}