#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"enter the size of array"<<endl;
    cin>>size;

    int array[size];
    cout<<"enter array elements"<<endl;
    for(int i = 0; i<size; i++)
    {
        cin>>array[i];
    }
    int min = array[0], max = array[0];
    for(int i = 0; i<size; i++)
    {
        if(array[i] < min)
        {
            min = array[i];
        }
        if(array[i] > max)
        {
            max = array[i];
        }
    }
    cout<<"minimum = "<<min<<endl<<"maximum = "<<max<<endl;

    return 0;
}