#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;

    for(int i = 1; i <= (n + (n-1)); i++)
    {

        for(int j = 1; j<i; j++)
        {
            cout<<" ";
        }
        int j = i;
        for(j; j<= (n + (n-1))-i; j++)
        {
            cout<<"*";
        }

        for(j; j <= (n + (n-1)); j++)
        {
            cout<<" ";
        }

        cout<<endl;
    }

    return 0;
}