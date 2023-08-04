// date = 03/02/2023
// day = friday

#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

    public:
        void make_complex(int a1, int b1)
        {
            a = a1;
            b = b1;
        }
        void subtract_complex(complex first, complex second)
        {
            a = first.a - second.a;
            b = first.b - second.b;
        }
        void display_complex()
        {
            cout<<"complex number is "<<a <<" + "<<b<<"i"<<endl;
        }
};

int main()
{
    complex c1, c2, c3;

    c1.make_complex(20, 30);
    c1.display_complex();

    c2.make_complex(15, 20);
    c2.display_complex();

    c3.subtract_complex(c1, c2);
    c3.display_complex();

    return 0;
}