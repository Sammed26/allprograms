#include <stdio.h>

int main()
{
    int n, k, d;
    printf("enter total places visited\n");
    scanf("%d", &n);

    printf("enter at least how many friends make and how many places\n");
    scanf("%d %d", &k, &d);

    int N[n], counter = 0;
    printf("enter friends made at each places out of %d places\n", n);
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &N[i]);
    }
    for(int j =0; j<n; j++)
    {
        if(N[j] > k)
        {
            counter++;
        }
    }

    if(counter >=d)
    {
        printf("happy\n");
    }
    else
    {
        printf("sad\n");
    }

    return 0;
}