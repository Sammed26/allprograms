#include <iostream>
using namespace std;

class complex 
{
    int a, b;
    public:
        complex(int , int );
        complex(int );
        complex();

        void display()
        {
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};

complex :: complex(int x, int y)
{
    a = x;
    b = y;
}


complex :: complex(int x)
{
    a = x;
    b = 0;
}

complex :: complex()
{
    a = 0; 
    b = 0;
}

int main()
{
    complex c1 = complex(4, 5);
    c1.display();

    complex c2 = complex(26);
    c2.display();

    complex c3 = complex();
    c3.display();

    return 0;
}