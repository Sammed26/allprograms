#include <iostream>
using namespace std;

int main()
{
    char array[] = {'c', 'd', 'm', 's'};
    /*cout<<array[0]<<endl;
    cout<<array[1]<<endl;
    cout<<array[2]<<endl;
    cout<<array[3]<<endl;
    */
    char *ptr;
    ptr = array;
    cout<<"array[0] is "<<*ptr<<endl;
    ptr++;
    cout<<"array[1] is "<<*ptr<<endl;
    ptr++;
    cout<<"array[2] is "<<*ptr<<endl;
    ptr++;
    cout<<"array[3] is "<<*ptr<<endl;
    ptr++;

    return 0;
}