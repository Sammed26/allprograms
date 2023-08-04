#include <iostream>
using namespace std;

class complex;

class calculator
{

    public:
        int sum_real_complex(complex , complex);
        int multiply_imaginary_complex(complex, complex);

};

class complex
{
    int a, b;
    // making friend class member functions individually
     
    // friend calculator :: sum_real_complex(complex first, complex second);
    // friend calculator :: multiply_imaginary_complex(complex first, complex second);

    // if you want to make whole class friend or in case there are so 
    // many functions in class then it is not good to 
    // friend all of them seperately, then whole class is made friend,
    // means friended class use all private data of other class 

    friend class calculator;

    public:
        void set_data(int a1, int b1)
        {
            a = a1;
            b = b1;
        }
        void print_data()
        {
            cout<<"the complex number is "<<a<<" + "<<b<<"i"<<endl;
        }

};

int calculator :: multiply_imaginary_complex(complex first, complex second)
{
    return (first.b * second.b);
}

int calculator :: sum_real_complex(complex first, complex second)
{
    return (first.a + second.a);
}

int main()
{
    calculator cal;

    complex c1, c2;
    c1.set_data(4, 5);
    c1.print_data();
    

    c2.set_data(2, 7);
    c2.print_data();

    int sum_result = cal.sum_real_complex(c1, c2);
    cout<<"the sum of real parts of c1 and c2 is "<<sum_result<<endl;

    int mul_result = cal.multiply_imaginary_complex(c1, c2);
    cout<<"the multiplication of imaginary parts of c1 and c2 is "<<mul_result<<endl;

    return 0;
}