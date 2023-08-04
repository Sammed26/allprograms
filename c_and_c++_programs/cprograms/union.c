#include <stdio.h>

union member
{
    int id1;
    int id2;

};

int main()
{
    union member A;

    A.id2 = 7857;
    A.id1 = 4856;

    printf("the first id is %d\n", A.id1);
    printf("the second id is %d\n", A.id2);

return 0;
}
