#include <iostream>
using namespace std;

class complex
{
    private:
        int real;
        int imaginary;
    public:
        void set_real(int r)
        {
            real = r;
        }
        int get_real()
        {
            return real;
        }
        void set_imaginary(int i)
        {
            imaginary = i;
        }
        int get_imaginary()
        {
            return imaginary;
        }
        void display()
        {
            cout<<"complex number is "<<get_real()<<"+"<<get_imaginary()<<"i"<<endl;
        }
        friend ostream& operator << (ostream &out, complex &c);
        friend istream& operator >> (istream &in, complex &c);
        void operator + (complex &c2)
        
        {
            c2.real = real + c2.real;
            c2.imaginary = imaginary + c2.imaginary;
        }
};

ostream& operator << (ostream &out, complex &c)
{
    out<<"enter real part and imaginary part"<<endl;
    return out;
}

istream& operator >> (istream &in, complex &c)
{
    in>>c.real;
    in>>c.imaginary;
    return in;
}

// complex operator + (complex &c1, complex &c2)
// {
//     complex temp;
//     temp.set_real(c1.get_real() + c2.get_real());
//     temp.set_imaginary(c1.get_imaginary() + c2.get_imaginary());
//     return temp;
// }

int main()
{
    complex c1, c2, c3;
    cout<<c1;
    cin>>c1;
    c1.display();

    int r, i;
    cout<<"enter comple number, real part and imaginary part"<<endl;
    cin>>r>>i;
    c2.set_real(r);
    c2.set_imaginary(i);
    c2.display();

    c1 + c2;
    c3.display();

    c1.display();
    c2.display();

    return 0;
}