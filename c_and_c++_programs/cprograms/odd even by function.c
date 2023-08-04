#include <stdio.h>

int oddeven(int n)
{
    if(n%2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }


}
int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d", &num);
   // printf(oddeven(num));
   oddeven(num);
    return 0;

}
