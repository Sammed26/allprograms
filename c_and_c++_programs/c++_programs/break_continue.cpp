#include<iostream>
using namespace std;

int main()
{
    int i;
    for(i = 0; i<=10; i++)
    {
        if(i == 3)
        {
            continue;
        }
        if(i == 7)
        {
            break;
        }
        cout<<i<<endl; 
    }


    return 0;
}
