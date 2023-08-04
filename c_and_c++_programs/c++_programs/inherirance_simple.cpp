#include <iostream>
using namespace std;

// base class
class simple
{
    public:
    int num;
    simple(){}  // if this default constructor is not made then at the time of execution 
                // this will throw an error. Because if derived class member is created it 
                // excepts an default constructor of simple class type

    simple(int n)
    {
        num = n;
    }
    void display();
};

class simple1
{
    public:
    int num1;
    simple1(){}  // if this default constructor is not made then at the time of execution 
                // this will throw an error. Because if derived class member is created it 
                // excepts an default constructor of simple class type

    simple1(int n)
    {
        num1 = n;
    }
    void display();
};


// derived class 
class complex : public simple, public simple1
{
    public:
    int derived_number = num + num1;

    complex(){}
    complex(int complex_num)
    {
        num = complex_num;
        num1 = complex_num;
    }

    void display()
    {
        cout<<"derived number is "<<derived_number<<endl;
    }

};

void simple :: display()
{
    cout<<"number entered is "<<num<<endl;;
}

void simple1 :: display()
{
    cout<<"number entered is "<<num1<<endl;;
}

int main()
{
    simple s1(25);
    s1.display();
    simple1 s(25);
    s.display();

    
    complex c1(59);

    c1.display();
    
    cout<<"derived class number is "<<c1.derived_number<<endl;
    cout<<"base class number which is include in derived class is "<<c1.num<<endl;
    c1.display();


    return 0;
}