#include <iostream>
#include <iomanip> // setw(_) this is included in this file
using namespace std;

int main()
{
    const float a = 2.43F;
    int b = 23;
    int c = 89;
    float d = 2343.34;

    cout<<"----------constants----------"<<endl;
    //a = 435.3; // this is invalid because previously a is declared as constant so the value is not changable
    cout<<"the value of a everywhere is "<<a<<endl; // endl is a manipulator, and is included in <iostream> header file
    
    cout<<"-----------manipulators---------"<<endl;
    cout<<a<<setw(10)<<endl; // here endl and setw() are manipulators in which setw() is included in <iomanip> header file
    cout<<b<<setw(10)<<endl;    
    cout<<c<<setw(10)<<endl;   
    cout<<d<<setw(10)<<endl;


    return 0;
}
