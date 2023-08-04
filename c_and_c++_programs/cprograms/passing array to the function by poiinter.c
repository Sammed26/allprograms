#include <stdio.h>

int add(int *arr[])
{
    int sum=0;
    int i;
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + *arr[i];
        arr[i] = (arr[i]+1);
    }
    return sum;

}

int main()
{
    int marks[5];
    int s;
    printf("enter the marks of students\n");

    s = add(marks[5]);
    return s;


}
