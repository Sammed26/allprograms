#include <iostream>
using namespace std;

void swap(int x, int y) //call by value. actual parameters a and b copied in formal parameters x and y
{
    int temp = x;
    x = y;
    y = x;
}

void swap_reference(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

}

void swap_reference_variable(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 7;
    int b = 9;
    
    // call by value
    cout<<"call by value"<<endl;
    cout<<"the value of a is "<<a<<" and b is "<<b<<endl;
    swap(a, b);
    cout<<"the value of a is "<<a<<" and b is "<<b<<endl;
    

    //call by reference
    cout<<"call by reference"<<endl;
    cout<<"the value of a is "<<a<<" and b is "<<b<<endl;
    swap_reference(&a, &b);
    cout<<"the value of a is "<<a<<" and b is "<<b<<endl;
    

    // by reference variable
    cout<<"swap by reference variable"<<endl;
    cout<<"the value of a is "<<a<<" and b is "<<b<<endl;
    swap_reference_variable(a, b);
    cout<<"the value of a is "<<a<<" and b is "<<b<<endl;
    
    return 0;
}