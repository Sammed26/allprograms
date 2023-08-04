#include <iostream>
using namespace std;

void reverse(int array[], int size)
{
    for(int i = 0; i<size/2; i++)
    {
        int temp;
        temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 -i] = temp;
    }
}

void display(int array[], int size)
{
    cout<<"array is "<<endl;
    for(int i = 0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int size;
    cout<<"enter size of array"<<endl;
    cin>>size;

    int array[size];
    cout<<"enter array elements"<<endl;
    for(int i = 0; i<size; i++)
    {
        cin>>array[i];
    }
    display(array, size);
    reverse(array, size);
    display(array, size);

    return 0;
}