#include <stdio.h>

int main()
{
    int data_size;
    printf("enter data size\n");
    scanf("%d", &data_size);
    char data_character[data_size];
    printf("enter data\n");
    scanf("%s", data_character);

    int divisor_size;
    printf("enter divisor size\n");
    scanf("%d", &divisor_size);
    char divisor_character[divisor_size];
    printf("enter divisor\n");
    scanf("%s", divisor_character);

    //printf("data %s\ndivisor %s", data_character, divisor_character);

    int s = data_size+(divisor_size-1);
    int divident[s];
    int i = 0;
    for(i = 0; i<data_size; i++)
    {
        divident[i] = data_character[i] - 48;
    }
    while(i != s)
    {
        divident[i] = 0;
        i++;
    }

    // for(int j = 0; j<s; j++)
    // {
    //     printf("%d", divident[j]);
    // }

    int divisor[divisor_size];
    for(int k = 0; k<divisor_size; k++)
    {
        divisor[k] = divisor_character[k] - 48;
    }

    int rem[divisor_size];

    int k = 0;
    while(k != s)
    {
        
    }




    return 0;
}