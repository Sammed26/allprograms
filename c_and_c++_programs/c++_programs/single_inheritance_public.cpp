#include <iostream>
using namespace std;

class base
{
    int data1;
    public:
        int data2;
        void set_data();
        int get_data1();
        int get_data2();
};

void base :: set_data()
{
    data1 = 39;
    data2 = 13;
}

int base :: get_data1()
{
    return data1;
}

int base :: get_data2()
{
    return data2;

}

class derived : public base
{
    public:
    int data3;
    void divide();
    void display();
};

void derived :: divide()
{
    data3 = (get_data1())/data2;
}

void derived :: display()
{
    cout<<"processed data is "<<data3<<endl;
}

int main()
{
    derived d1;
    d1.set_data();
    d1.divide();
    d1.display();


    return 0;
}