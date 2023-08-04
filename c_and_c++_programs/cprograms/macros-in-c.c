#include <stdio.h>
int main()
{
    printf("the current time is %s\n", __TIME__);
    printf("the current date is %s\n", __DATE__);
    printf("can code compiling with ANSI standards : %d\n", __STDC__);

return 0;
}
