#include <iostream>
using namespace std;

void bubble_recursion(int *arr, int size)
{
    if(size == 0 || size == 1)
    {
        return ;
    }

    int swapped = 0;
    for(int i = 0; i<size-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            swapped = 1;
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    if(swapped == 0)
    {
        return ;
    }


    bubble_recursion(arr, size - 1);
}

int main()
{
    int size; 
    cout<<"enter size of array"<<endl;
    cin>>size;

    int *arr = new int[size];
    cout<<"enter size of array"<<endl;
    for(int i = 0; i<size; i++)
    {
        cin>>*(arr + i);
    }

    cout<<"array before sorting"<<endl;
    for(int i= 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    bubble_recursion(arr, size);
    
    cout<<"array after sorting"<<endl;
    for(int i =0; i<size; i++)
    {
        cout<<i[arr]<<" ";
    }

    return 0;
}