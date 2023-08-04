#include <iostream>
using namespace std;

class base1
{
    private:
        int data1;

    public:
        base1(int x)
        {
            cout<<"base1 constructor invoked"<<endl;
            data1 = x;
        }
        void get_data1()
        {
            cout<<"data1 = "<<data1<<endl;
        }
};

class base2
{
    private:
        int data2;

    public:
        base2(int x)
        {
            cout<<"base2 constructor invoked"<<endl;
            data2 = x;
        }
        void get_data2()
        {
            cout<<"data2 = "<<data2<<endl;
        }
};

/*
    If while deriving class if there is any virtual base class present its constructor 
    invoked first.
*/

class derived : public base1, public virtual base2 // here which class declared first that 
                                                   // class constructor invoked first
{
    private:
        int derived_data1;
        int derived_data2;
        int derived_data3;
    
    public:
        derived(int i, int j, int m, int n, int l): base1(i), base2(j)
        {
            derived_data1 = m;
            derived_data2 = n;
            derived_data3 = l;
            cout<<"derived class constructor invoked"<<endl;
        }
        void get_derived_data()
        {
            cout<<"derived data 1 = "<<derived_data1<<endl;
            cout<<"derived data 2 = "<<derived_data2<<endl;
            cout<<"derived data 3 = "<<derived_data3<<endl;
        }
};

int main()
{
    derived d1(26, 27, 48, 29, 1);
    d1.get_data1();
    d1.get_data2();
    d1.get_derived_data();

    return 0;
}