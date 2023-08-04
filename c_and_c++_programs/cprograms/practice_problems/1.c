#include <stdio.h>

int main()
{
    int t, n;

    int j = 1;
    printf("enter total number of testcases\n");
    scanf("%d", &t);
    while (j <= t)
    {

        printf("enter total number of testcases results\n");
        scanf("%d", &n);

        int N[n];
        printf("enter values as 1 for red\n2 for green\n3 for blue");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", N[i]);
        }
    }
    return 0;
}