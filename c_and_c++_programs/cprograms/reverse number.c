#include <stdio.h>

void reverse(int z)
{
    int rever = 0;
    int main_number = z;
    while(z != 0)
    {
        rever = rever*10 + z%10;
        z = z/10;
    }
    printf("the reversed number is %d\n", rever);


}
int main()
{

    int n;
    printf("enter the number that you want to reverse\n");
    scanf("%d", &n);

    reverse(n);

return 0;
}
