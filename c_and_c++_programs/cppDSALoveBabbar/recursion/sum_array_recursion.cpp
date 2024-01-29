#include <iostream>
using namespace std;

int array_sum(int arr[], int size)
{
    if(size == 0)
    {
        return 0;
    }
    if(size == 1)
    {
        return arr[0];
    }
    
    return arr[0] + array_sum(arr+1, size-1);
}

int main()
{
    int *arr = 0;
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    arr = new int[n];

    cout<<"enter array elements"<<endl;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    int sum = array_sum(arr, n);

    cout<<"sum of array = "<<sum<<endl;

    return 0;
}