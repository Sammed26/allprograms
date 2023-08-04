#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<"enter number"<<endl;
    cin>>number;
    if(number > 0)
    {
        cout<<"number entered is positive"<<endl;
    }
    else if(number < 0)
    {
        cout<<"number entered is negative"<<endl;
    }
    else
    {
        cout<<"number entered is exactly zero"<<endl;
    }


    return 0;
}