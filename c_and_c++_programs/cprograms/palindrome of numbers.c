#include <stdio.h>

int palindrome(int x)
{
    int reverse = 0;
    int original_number = x;
    while(x != 0)
    {
        reverse = reverse*10 + x%10;
        x = x/10;
    }

    printf("reversed number of original number is %d\n", reverse);
    if(reverse == original_number)
    {
        printf("Number is palindrome\n");
    }
    else
    {
        printf("Number is not a palindrome\n");
    }


}
int main()
{
    int num;
    printf("enter the number that you want to cheak palindrome or not\n");
    scanf("%d", &num);

    palindrome(num);


return 0;
}
