#include <iostream>
using namespace std;

class complex
{
    int real;
    int imaginary;
    public:
        complex()
        {
            real = 0;
            imaginary = 0;
        }
        complex(int r, int i)
        {
            real = r;
            imaginary = i;
        }
        complex operator+(complex c1)
        {
            complex c2;
            c2.real = real + c1.real;
            c2.imaginary = imaginary + c1.imaginary;
            return c2;
        }
        void display()
        {
            cout<<"real = "<<real<<endl<<"imaginary = "<<imaginary<<endl;
        }
};

int main()
{
    complex c1(27, 26), c2(29, 12), c3;
    c3 = c1 + c2;
    c3.display();


    return 0;
}