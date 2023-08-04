/* 18.	You are given 3 numbers a, b and x. write a C program to output the multiple of x which is closest to a^b */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, x;
    cout<<"enter a, b and x"<<endl;
    cin>>a>>b>>x;

    int apowerb = pow(a, b);
    int temp = x, closest_val;

    while((temp + x) < apowerb)
    {
        closest_val = temp;
        temp = temp + x;
    }
    cout<<"cloasest value to a^b is "<<closest_val<<endl;

    return 0;
}