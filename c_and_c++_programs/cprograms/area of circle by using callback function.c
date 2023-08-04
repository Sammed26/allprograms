#include <stdio.h>
#include <math.h>

int a;
int edistance(int x1, int x2, int y1, int y2)
{

    a = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
    return sqrt(a);
}


int area(int x1, int x2, int y1, int y2, float (*distance)(int x1, int x2, int y1, int y2))
{
    float area;
    area = 3.14*sqrt(a)*sqrt(a);

    return area;
}


int main()
{
    int x1, x2, y1, y2;
    float dist;
    printf("enter the values of x1, x2, y1, y2\n");
    scanf("%d%d%d%d", &x1, &x2, &y1, &y2);
   // int (*ptr)(float);
  // ptr = edistance;
    dist = area(x1, x2, y1, y2, edistance);
    printf("the distance is %f\n", dist);


return 0;
}
