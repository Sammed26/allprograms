#include <iostream>
using namespace std;

void multiplication_table(int a)
{
    int i;
    cout<<"the multiplication table of "<<a<<" is"<<endl;
    for(i = 1; i<11; i++)
    {
        cout<<a<<" * "<<i<<" =  "<<(a*i)<<endl;
    }
}

void display(); // this is function prototyping. That means declaring function above main and explaining after main
 
int main()

{
    int num;
    cout<<"\nenter the number that you want multiplication table of ";
    cin>>num;
    multiplication_table(num);
    display();

    return 0;
}

void display()
{
    cout<<"******* how are you? *******"<<endl;
}