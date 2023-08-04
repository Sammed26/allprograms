#include <iostream>
using namespace std;

template <class T1, class T2>
float smallest(T1 a, T2 b)
{
    if(a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

// here i can use same function but according to my input data it changes its mode 
// if 'int' then performs like 'int', if 'float' performs like 'float'. this is function template

int main()
{
    float small_no;
    small_no = smallest(45, 36);
    cout<<"smallest number is "<<small_no<<endl;

    cout<<endl;

    small_no = smallest(45.25, 2.6);
    cout<<"smallest number is "<<small_no<<endl;

    return 0;
}