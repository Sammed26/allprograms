#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r1st;
    printf("enter the rows of first matrix\n");
    scanf("%d", &r1st);

    int c1st;
    printf("enter the columns of first matrix\n");
    scanf("%d", &c1st);

    int r2nd;
    printf("enter the rows of second matrix\n");
    scanf("%d", &r2nd);

    int c2nd;
    printf("enter the columns of second matrix\n");
    scanf("%d", &c2nd);

    if(c1st != r2nd)
    {
        printf("your matrix can't be multiplied\n");
    }

    else
    {
        int A[r1st][c1st];
        int B[r2nd][c2nd];

        printf("enter your first matrix\n");
        for(int i=0; i<r1st; i++)
        {
            for(int j=0; j<c1st; j++)
            {
                scanf("%d", &A[i][j]);
            }
        }


        printf("enter your second matrix\n");
        for(int i=0; i<r2nd; i++)
        {
            for(int j=0; j<c2nd; j++)
            {
                scanf("%d", &B[i][j]);

            }

        }

    printf("the first matrix is :\n");

        for(int i=0; i<r1st; i++)
        {
            for(int j=0; j<c1st; j++)
            {
                printf("%d", A[i][j]);
                printf("\t");
            }
            printf("\n");
        }

         printf("the second matrix is :\n");

        for(int i=0; i<r2nd; i++)
        {
            for(int j=0; j<c2nd; j++)
            {
                printf("%d", B[i][j]);
                printf("\t");
            }
            printf("\n");
        }

        printf("matrix multiplication is :\n");

        for(int i=0; i<r2nd; i++)
        {
            for(int j=0; j<c2nd; j++)
            {
                for(int k =0; k<)
                printf("%d", (A[i][j]*B[j][i])+(A[i][j]*B[j][i]));
                printf("\t");
            }
            printf("\n");
        }









    }


return 0;
}
