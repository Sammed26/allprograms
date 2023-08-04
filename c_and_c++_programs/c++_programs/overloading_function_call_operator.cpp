#include <iostream>
using namespace std;

class value
{
    int val;
    public:
        value(int v)
        {
            cout<<"constructor called"<<endl;
            val = v;
        }
        void display()
        {
            cout<<"the value is "<<val<<endl;
        }
        int operator()(int newval)
        {
            cout<<"operator function called"<<endl;
            val = newval;
            return val;
        }        
};

int main()
{
    value v1(26);
    v1.display();

    cout<<v1(77)<<endl;  // by means of function call operator overloading value chanaged
                         // and hence the function returning int value so directly printed
    v1.display();

    return 0;
}