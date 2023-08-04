#include <iostream>
using namespace std;

int main()
{
    int divident, divisor, remainder, quotient;
    cout<<"enter divisor and remainder"<<endl;
    cin>>divident>>divisor;
    quotient = divident/divisor;
    remainder = divident % divisor;

    cout<<"quotient = "<<quotient<<endl<<"remainder = "<<remainder<<endl;

    return 0;
}