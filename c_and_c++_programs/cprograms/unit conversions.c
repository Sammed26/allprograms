#include <stdio.h>
int main()
{
    int km, m, inch;
    char ch, q;

    printf("enter relevant option\n 1 = kilometer to meter\n 2 = meter to centimeter\n 3 = centimeter to inches\n 4 = QUIT\n");
    scanf("%c", &ch);

    switch(ch)
    {
    case '1':

            printf("enter value in kilometer to convert it to meter\n");
            scanf("%d",&km);
            printf("%d kilometer = %d meter\n", km, (km*1000));
       break;


    case '2':

            printf("enter value in meter to convert it to cintimete\n");
            scanf("%d",&m);
            printf("%d meter = %d CENTImeter\n", m, (m*1000));
        break;


    case '3':

            printf("enter value in inch to convert it to centimeter\n");
            scanf("%d",&inch);
            printf("%d inch = %d centimeter\n", inch , (inch*2.25));
       break;


    case '4':

            printf("QUITTING\n");
        break;

    default:
        printf("please enter proper input\n");


     }
return 0;

}
