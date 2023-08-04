#include <iostream>
using namespace std;

class point
{
    int a, b;

    public:
        point(int , int);

        void display()
        {
            cout<<"("<<a<<" , "<<b<<")"<<endl;
        }
};

point :: point(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    // implicit call
    point p(4, 5);
    p.display();

    // explicit call
    point q = point(26, 29);
    q.display();

    return 0;
}