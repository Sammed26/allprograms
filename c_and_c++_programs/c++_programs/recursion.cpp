#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n-1);
}

int fabonachi(int n)
{
    if(n == 1 || n == 2)
    {
        return 1;
    }
    return fabonachi(n-1)+fabonachi(n-2);
}

int main()
{
    int num, place;
    /*cout<<"enter a number"<<endl;
    cin>>num;
    cout<<"factorial of "<<num<<" is "<<factorial(num)<<endl;*/
    
    cout<<"enter the place till you want fabonachi series"<<endl;
    cin>>place;
    cout<<"the fabonachi series of "<<place<<" is "<<fabonachi(place)<<endl;


    return 0;
}