#include <iostream>
using namespace std;


void reverse_recursion(int* arr, int start, int end)
{
    if(start > end)
    {
        return ;
    }

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverse_recursion(arr, start+1, end-1);
}

int main()
{
    int size;
    cout<<"enter size of array"<<endl;
    cin>>size;

    int* arr = 0;
    arr = new int[size];

    cout<<"enter array elements"<<endl;
    for(int i = 0; i<size; i++)
    {
        cin>>*(i + arr);
    }

    cout<<"before reversing"<<endl;
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    reverse_recursion(arr, 0, size-1);

    cout<<endl<<"after reversing"<<endl;
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}