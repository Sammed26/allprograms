#include <iostream>
#include <math.h>
using namespace std;

class point
{
    int a, b;
    friend void distance_between_points(point, point);

    public:
        point(int x, int y)
        {
            a = x;
            b = y;
        }
        void display()
        {
            cout<<"("<<a<<" , "<<b<<")"<<endl;
        }
};

void distance_between_points(point first, point second)
{
    double distance;
    distance = sqrt(((second.a - first.a) * (second.a - first.a)) + ((second.b - first.b) * (second.b - first.b)));
    cout<<"distance between given points is "<<distance<<endl;

}

int main()
{
    point p = point(25, 1);
    p.display();

    point q = point(1, 7);
    q.display();

    distance_between_points(p, q);

    return 0;
}