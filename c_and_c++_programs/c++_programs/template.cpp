#include <iostream>
using namespace std;

template <class T>
class sum
{
    T a;
    T b;
    public:
        sum(){}
        sum(T x, T y)
        {
            a = x;
            b = y;
        }
        void getaddition()
        {
            cout<<"addition is "<<(a+b)<<endl;
        }
};

int main()
{
    int a = 26;
    int b = 5;
    sum <int>forintegerclass(a, b);   // object created of sum class for float using same
                                      // class template
    forintegerclass.getaddition();

    float c = 2.6;
    float d = 0.34;
    sum <float>forfloatclass(c, d);  // object created of sum class for float using same
                                     // class template
    forfloatclass.getaddition();

    return 0;
}