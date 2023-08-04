#include <iostream>
using namespace std;

template <class T>
class simple
{
    T data;
    public:
        simple(T a)
        {
            data = a;
        }
        void display();
};

template <class T>
void simple<T> :: display()   // member function templatization
{
    cout<<"data is "<<data<<endl;
}

void print(int x)
{
    cout<<"exact matched function called "<<x<<endl;
}

/* if function with exact match of datatypes is present along with same named same 
   result yielding templatized functions are present then highest priority is given to exact
   mathched function instead of same templatized functions    
*/

template <class T>
void print(T x)
{
    cout<<"print templatized is called "<<x<<endl;
}

int main()
{
    simple <int> firstobj(26);
    firstobj.display();
    cout<<endl;

    print(2);   // exact match function is present so priority is given to it
    print(2.6);  // here no any exact match fuction is present so template function is invoked

    return 0;
}