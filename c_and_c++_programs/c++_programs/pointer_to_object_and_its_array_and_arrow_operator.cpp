#include <iostream>
using namespace std;

class simple
{
    int a, b;
    public:
        simple(int i, int j)
        {
            a = i;
            b = j;
        }
        void display()
        {
            cout<<"a is "<<a<<endl;
            cout<<"b is "<<b<<endl;
        }
};

int main()
{
    simple s1(26, 29);     // without pointers
    s1.display();

    simple s2(14, 5);
    simple* ptr = &s2;     // using pointer 
    ptr->display();        // -> arrow operator

    simple* p = new simple(15, 859);
    p->display();          // creating object using new operator dynamically
    delete p;
    (*p).display();
    cout<<"in above line 'a' showing garbage value because it is deleted"<<endl;


    simple s4(58, 97);
    simple* pointer;        // using dot operator
    pointer = &s4;
    (*pointer).display();



    return 0;
}