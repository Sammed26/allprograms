#include<iostream>
using namespace std;

int global = 26;
int main()
{
                     //   scope resolution operator ::   //

  int global = 7;
  cout<<"The local variable is displayed "<<global<<endl;
  cout<<"The global variable is displayed "<<::global<<endl;



                     // -----------LITERAL----------
    // Every float, long double, etc number are considered as double unless they are specified as float like float a = 3f; or float a = 3F;



    int a = 5;
    float b = 22.45f ;
    double c = 32.22;
    long double d = 63.45l;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;


    cout<<"Size of int a = 5 "<<sizeof(a)<<endl;
    cout<<"Size of float b = 22.45 " <<sizeof(b)<<endl;
    cout<<"Size of double c = 32.22 "<<sizeof(c)<<endl;
    cout<<"Size of long double d = 63.45 "<<sizeof(d)<<endl;


                         //     Typecasting      //




        int s = 15;
        float m = 6.66;

        cout<<" the s after typecasting from int to float is "<<float(s)<<endl;
        cout<<" the s after typecasting from int to double is "<<double(s)<<endl;
        cout<<" the m after typecasting from float to int is "<<int(m)<<endl;
        cout<<" the m after typecasting from int to longdouble is "<< (long double)(m)<<endl;

    return 0;
}