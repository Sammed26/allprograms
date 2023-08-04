#include <iostream>
using namespace std;

int main()
{
    int i, num;

    cout<<"enter the number that you want multiplication table"<<endl;
    cin>>num;
    cout<<"the multiplication table is"<<endl;
   /* for(i = 1; i < 11; i++)
    {
        cout<<(i*num)<<endl;
    } */

   /* i = 1;    //initialization
    while(i<=10)
    {
        cout<<(i*num)<<endl;
        i++;    // increment or decrement
    }    */

    i = 1;
    do
    {
        cout<<(i*num)<<endl;
        i++;
    }while(i<11);

    return 0;
}