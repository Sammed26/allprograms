#include <iostream>
using namespace std;

bool issorted(int arr[], int size)
{
    if(size == 0 || size == 1)
    {
        return true;
    }

    if(arr[0] > arr[1])
    {
        return false;
    }
    return issorted(arr+1, size-1);
}

int main()
{
    int* arr = 0;
    int n; 
    cout<<"enter size of array"<<endl;
    cin>>n;

    arr = new int[n];
    cout<<"enter array elements"<<endl;
    for(int i = 0; i<n; i++)
    {
        cin>>*(arr + i);
    }

    if(issorted(arr, n))
    {
        cout<<"array is sorted"<<endl;
    }
    else
    {
        cout<<"array is not sorted"<<endl;
    }


    return 0;
}