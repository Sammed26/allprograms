#include <iostream>
using namespace std;

int product(int a, int b)
{
    cout<<"using first function"<<endl;
    return (a * b);
}

int product(int a, int b, int c, int d)
{
    cout<<"using second function"<<endl;
    return (a * b * c * d);
}

int main()
{
    cout<<"product of 3, 6, 2, 3 is "<<product(3, 6, 2, 3)<<endl;
    cout<<"product of 3, 6, 2, 3 is "<<product(6, 2)<<endl;

    return 0;
}