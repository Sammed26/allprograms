#include <iostream>
using namespace std;

int global = 4;
int main()
{
    // ------------SCOPE RESOLUTION OPERATOR-------------
    // SCOPE RESOLUTION OPERATOR = ::

    int global = 2;
    cout<<"here the local variable is displayed = "<<global<<endl;
    cout<<"here the global variable in displayed using 'scope resolution opeator' = "<<::global<<endl;

    // -----------LITERAL----------
    // Every float, long double, etc number are considered as double unless they are specified as float like float a = 3f; or float a = 3F;

    float a = 4;
    float b = 32.62f;
    long double c = 23.98l;
    long double d = 23.98;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

    cout<<"size of 'float a = 4' is "<<sifzeo(a)<<endl;
    cout<<"size of 'float b = 32.62f' is "<<sizeof(b)<<endl;
    cout<<"size of 'long double c = 23.98l' is "<<sizeof(c)<<endl;
    cout<<"size of 'long double d = 23.98' is "<<sizeof(d)<<endl;  

    // ---------typecasting---------

    int m = 2;
    float s = 2.5;

    cout<<"the m after typecasting from int to float is "<<float(m)<<endl;
    cout<<"the m after typecasting from int to float is "<<(float)m<<endl;
    cout<<"the s after typecasting from float to int is "<<int(s)<<endl;
    cout<<"the s after typecasting from float to int is "<<(int)s<<endl;



    return 0;
}