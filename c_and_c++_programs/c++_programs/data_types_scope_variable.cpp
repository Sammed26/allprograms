#include<iostream>

using namespace std;

int globalvar = 2;

void display()
{
    cout<<"\nthe global variable is "<<globalvar;
}
int main()
{
    int a = 34, b = 43;
    char s = 'j';
    int globalvar = 123;
    cout<<"the value of a is "<<a<<"\nthe value of b is "<<b; 
    cout<<"\nthe value of b is "<<b;
    cout<<"\nthe value of s character is "<<s;
    display();
    cout<<"\nthe value of global in main is "<<globalvar;

    return 0;
}