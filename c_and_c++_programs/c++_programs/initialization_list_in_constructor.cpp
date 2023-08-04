#include <iostream>
using namespace std;

class simple
{
    int a;
    int b;
    public:
        // simple(int i, int j) : a(i), b(j)
        // simple(int i, int j) : a(i), b(j + a) // a got its value before initialization of b
                                              // so this works finely
        // simple(int i, int j) : b(i), a(j)

        simple(int i, int j) : b(i), a(b + j)
        {
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
        }
};

int main()
{
    simple s1(26, 4);


    return 0;
}