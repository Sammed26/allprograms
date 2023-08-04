#include <iostream>
using namespace std;

class value
{
    int val;
    public:
        value()
        {
            val = 0;
        }
        value(int x)
        {
            val = x;
        }
        void display()
        {
            cout<<"the value is "<<val<<endl;
        }
        void operator+=(int incrementval)
        {
            val = val + incrementval;  // also written as 'val += incrementval'
            cout<<"+= operator overloaded"<<endl;
        }
        friend void operator-=(value &current_obj, int decrementval);
};

void operator-=(value &current_obj, int decrementval)
{
    current_obj.val -= decrementval;
    cout<<"-= operator overloaded"<<endl;
}

int main()
{
    value val1(26);
    val1.display();

    val1 -= 10;
    val1.display();

    val1 += 10;
    val1.display();

    return 0;
}