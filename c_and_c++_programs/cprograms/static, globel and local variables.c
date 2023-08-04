#include <stdio.h>
static int b = 456;
int show2()
{
        //static int b = 456;
        printf("the value is %d\n", b);

        b = b+10;
}


/*int show(int num)
{
    int a = 34;
    printf("the value is %d\n", a);
}*/


//int a=5;
int main()
{
        //printf("value of a is %d\n", a);
    int c;
   //int a;

   // c = show(a);
      c = show2();
      c = show2();
      c = show2();

return 0;
}
