#include <iostream>
using namespace std;

int evenodd(int n)
{
    if(n%2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int number;
    cout<<"enter number "<<endl;
    cin>>number;
    if(evenodd(number) == 1)
    {
        cout<<number<<" is even"<<endl;
    }
    else
    {
        cout<<number<<" is odd"<<endl;
    }

    return 0;
}