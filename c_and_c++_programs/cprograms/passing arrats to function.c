#include <stdio.h>

float ave(float arr[])
{
    float sum;
    int i;
    sum = 0;
    for(i=0; i<5; i++)
    {
        scanf("%f", &arr[i]);
        sum = sum + arr[i];

    }
    return sum/(i);

}

int main()
{
    float marks[5], sum;
    printf("enter the marks of students\n");

     sum = ave(marks);
     printf("the average of marks of student is %f\n", sum);

    return 0;
}
