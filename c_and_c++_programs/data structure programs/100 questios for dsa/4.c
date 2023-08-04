#include <stdio.h>

int main()
{
    int array[10];
    printf("enter prices of 10 days one by one\n");
    for(int i =0; i<10; i++)
    {
        scanf("%d", &array[i]);
    }

    int max_profit[10];
    int max_pro = 0;
    int max_pro_start_day = 0;
    int max_pro_end_day = 0;

    for(int j = 0; j<10; j++)
    {
        for(int k = (j + 1); k <10; k++)
        {
            if((array[j] - array[k]) > (array[max_pro_start_day] - array[max_pro_end_day]))
            {
                max_pro_start_day = j;
                max_pro_end_day = k;
            }
        }
    }

    printf("to earn maximum profit you should buy stock on %d th day and sell it on %d th day",max_pro_start_day, max_pro_end_day);


    return 0;
}