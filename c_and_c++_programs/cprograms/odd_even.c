#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number\n");
    scanf("%d",&n);

    if(n%2 == 0)
        {
            printf("entered number %d is even\n", n);
        }

    else if(n ==1 )
        {
            printf("entered number 1 is neither prime nor composite\n");
        }

    else
        {
            printf("entered number %d is odd\n", n);
        }
         printf("n%2 = %d\n", n%2);

         printf("n is %d", n);
    return 0;
}
