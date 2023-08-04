#include <iostream>
using namespace std;

template <class S1, class S2>
class simple
{
    S1 a;
    S2 b;
    public:
        void set_data(S1 x, S2 y)
        {
            a = x;
            b = y;
        }
        void print()
        {
            cout<<a<<endl<<b<<endl;
            cout<<endl;
        }
};

int main()
{
    simple <float, char> firstobj;
    firstobj.set_data(26.26, 's');
    firstobj.print();

    simple <int, long double> secondobj;
    secondobj.set_data(26, 26.262626262626);
    secondobj.print();


    return 0;
}