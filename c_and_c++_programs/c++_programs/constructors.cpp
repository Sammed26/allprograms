#include <iostream>
using namespace std;

class calculator
{
    int a = 58, b = 8;
    
    public:
    calculator();
};

calculator :: calculator() // whenever object is created this runs automatically 
                           // so called constructors
{
    cout<<"this is constructor"<<endl;
    cout<<"sum is "<<(a+b)<<endl;
    cout<<"difference is "<<(a-b)<<endl;
    cout<<"multiplication is "<<(a*b)<<endl;
}

int main()
{
    calculator c1;
    

    return 0;
}
