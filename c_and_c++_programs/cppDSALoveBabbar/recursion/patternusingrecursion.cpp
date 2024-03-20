#include <iostream>
using namespace std;

void printpatt1(int n)
{
    // ****
    // ***
    // **
    // *

    if(n == 0)
    {
        return ;
    }

    for(int i = 0; i<n; i++)
    {
        cout<<"*";
    }
    
    cout<<endl;

    printpatt1(n-1);
}

void printpatt2(int row, int col)
{
    // ****
    // ***
    // **
    // *

    if(row == 0)
    {
        return ;
    }

    if(col < row)
    {
        cout<<"*";
        printpatt2(row, col+1);
    }
    else
    {
        cout<<endl;
        printpatt2(row-1, 0);
    }
}

int main()
{

    printpatt2(4, 0);

    return 0;
}