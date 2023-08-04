#include <iostream>
using namespace std;

class second;

class first
{
    int val1;
    friend void multiply(first, second); // here error comes if second class is not
                                         // declared, because compiler doesn't know 
                                         // what is 'second' till now
    public:
        void set_data(int a)
        {
            val1 = a;
        }
};

class second
{
    int val2;
    friend void multiply(first, second);
    public:
        void set_data(int b)
        {
            val2 = b;
        }
};

void multiply(first o1, second o2)
{
    cout<<"the multiplication of both class data is "<<(o1.val1 * o2.val2)<<endl;
}

int main()
{
    first f1;
    second s1;

    f1.set_data(5);
    s1.set_data(2);

    multiply(f1, s1);

    return 0;
}