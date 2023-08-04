#include <iostream>
using namespace std;

class simple
{
    int a, b;
    public:
        simple(){}
        simple(int x, int y)
        {
            a = x;
            b = y;
        }
        simple(simple &obj)
        {
            cout<<"copy constructor"<<endl;
            a = obj.a;
            b = obj.b;
        }
        void display()
        {
            cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
        }
};

int main()
{
    simple s1(26, 15);
    s1.display();

    simple s2(s1); // this is one method to call copy constructor
    s2.display();

    simple s3 = s2; // this is another method to invoke copy constructor
    s3.display();

    //simple s4; 
                 /* if we create object earlier and later on we try to invoke 
                  copy constructor, it can't be invoked */
    //s4 = s1; 

    // if there is no any copy constructor defined then compiler has it's default copy
    // constructor which compiler runs


    return 0;
}