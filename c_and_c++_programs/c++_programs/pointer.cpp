#include <iostream>
using namespace std;

int main()
{
    int a;
    a = 726;
    int* ptr;
    ptr = &a;

    cout<<"value is "<<a<<endl;
    cout<<"value is "<<*ptr<<endl;

    cout<<"address of a is "<<&a<<endl;
    cout<<"address of a is "<<ptr<<endl;

    int **d = &ptr;
    cout<<"double pointer value "<<**d<<endl;
    cout<<"double pointer pointing address "<<*d<<endl;
    cout<<"double pointer pointing address "<<d<<endl;
    

    return 0;
}