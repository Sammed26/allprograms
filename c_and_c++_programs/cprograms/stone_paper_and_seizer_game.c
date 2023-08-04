/* stone(1), paper(0) = paper(0) wins
   paper(0), seizer(2) = seizer(2) wins
   stone(1), seizer(2) = stone(1) wins
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int getrandomvalue(int x)
{
    srand(time(NULL));
    return rand()%x;
}

int main()
{
    int n;
    int i=0;
    printf("     ****  welcome  ****     \n     ##   enjoy   ##     \n");
    printf("\n\n\n");

    printf("How many times you want to play this game\n\n");
    scanf("%d", &n);
    char name[10];
    printf("enter your name\n\n");
    scanf("%s", &name);
    getchar();
    printf("     paper = 0\n     stone = 1\n     seizer =2\n");

    static int you_win=0;
    static int you_lose=0;

    static int draw=0;
    int c,r;

        printf("\n\n");
        printf("          LETS START   \n\n", name);


         while(i<=n)
        {
        printf("          %s's turn\n\n", name);
        scanf("%d", &r);
        printf("          computer's turn\n");
        c = getrandomvalue(3);
        printf("%d\n", c);



        if(r == c)
        {
            printf("game is draw\n");
            draw++;

        }

        else if(r == 0 && c == 1 || r == 1 && c == 2  || r == 2 && c == 0)
        {
            printf("%s win the game\n", name);
            you_win++;
        }

        else
        {
            printf("computer won the game\n");
           you_lose++;
        }

        i++;
        }

        printf("\n\n");

        if(you_win > n/2)
        {
            printf("congrats\nyou won the game\n");


        }

        else if(you_win <= n/2)
        {
            printf("oops.... computer win the game\n", name);

        }

        else
        {
            printf(".......draw.......\n");

        }

return 0;
}
