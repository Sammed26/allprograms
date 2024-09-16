#include <iostream>
using namespace std;

bool linear_search(int *arr, int size, int target)
{
    if(size == 0)
    {
        return 0;
    }
    if(arr[0] == target)
    {
        return 1;
    }

    return linear_search(arr+1, size-1, target);

}

int main()
{
    int* arr = 0;
    int size;
    cout<<"enter size of array"<<endl;
    cin>>size;

    arr = new int[size];

    cout<<"enter array elements"<<endl;
    for(int i = 0; i<size; i++)
    {
        cin>>i[arr];
    }

    int target;
    cout<<"enter element to search"<<endl;
    cin>>target;

    if(linear_search(arr, size, target))
    {
        cout<<"element found"<<endl;
    }
    else
    {
        cout<<"!! not found"<<endl;
    }

    return 0;
}