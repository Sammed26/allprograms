#include <stdio.h>
int main()
{
    int num;
    printf("enter the number that you want multiplication table\n");
    scanf("%d", &num); 
    printf("the multiplication table of %d is\n", num);

    for (int i = 1; i <=10 ; i++)
    {
        printf("%d\n", i*num);
    }
    

    return 0;
}