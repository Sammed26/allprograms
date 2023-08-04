#include <iostream>
using namespace std;

class complex
{
    float real, imaginary;

    public:
        char sign_in_between;
        void set_data(float a, float b, char sign)
        {
            real = a;
            imaginary  = b;
            sign_in_between = sign;
        }
        float get_real()
        {
            return real;
        }
        float get_imaginary()
        {
            return imaginary;
        }
        void display();
};

void complex :: display()
{
    cout<<"complex number is "<<get_real();
    cout<<sign_in_between;
    cout<<get_imaginary();
    cout<<"i"<<endl;
}

void complexaddition(complex c1, complex c2)
{
    complex add;
    float y;
    float x = (c1.get_real()+c2.get_real());
    if(c1.sign_in_between == c2.sign_in_between)
    {
        y = (c1.get_imaginary()+c2.get_imaginary());
        add.sign_in_between = c2.sign_in_between;
    }
    else
    {
        y = (c1.get_imaginary()-c2.get_imaginary());
        add.sign_in_between = '-';
    }
    add.set_data(x, y, add.sign_in_between);
    cout<<"sum is ";
    add.display();
}

int main()
{
    float rea, imagin;
    char sign;
    complex c1, c2;
    cout<<"enter first complex number in form ' real operator imaginary'"<<endl;
    cin >> rea;
    cin >> sign;
    cin >> imagin;
    c1.set_data(rea, imagin, sign);
    c1.display();

    cout<<"enter second complex number in form ' real operator imaginary'"<<endl;
    cin >> rea;
    cin >> sign;
    cin >> imagin;
    c2.set_data(rea, imagin, sign);
    c2.display();

    complexaddition(c1, c2);
    

    return 0;
}