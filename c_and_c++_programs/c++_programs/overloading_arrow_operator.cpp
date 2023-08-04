#include <iostream>
using namespace std;

class marks
{
    int mark;
    public:
        marks(int x)
        {
            mark = x;
        }
        void display()
        {
            cout<<"your marks are "<<mark<<endl;
        }
        marks *operator->()
        {
            return this;
        }
};

int main()
{
    marks m1(26);
    m1.display();    // this only calls function wrt to object
    m1->display();   // this returns a pointer and then by address function is called

    return 0;
}