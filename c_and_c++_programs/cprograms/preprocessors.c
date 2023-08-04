#include <stdio.h>

#define area(r) 3.14*r*r
int main()
{
    float r = 4;
    printf("the area of circle is %f\n", area(r));

  #undef area(r)

   // printf("the area of circle is %f\n", area(r));

    #ifdef area(r)
       printf("successful\n");

    #endif  area(r)

    #ifndef area(r)

      printf("not successful\n");
    #endif area(r)


return 0;
}
