#include <iostream>
using namespace std;

class cla
{
    int a, b, c;
    public:
        cla(int y, int z, int m=26)
        {
            a = y;
            b = z;
            c = m;
        }
        void display()
        {
            cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl;
        }
};

int main()
{
    cla c1(26, 29, 27);
    c1.display();

    cla c2(8, 3);
    c2.display();

    return 0;
}