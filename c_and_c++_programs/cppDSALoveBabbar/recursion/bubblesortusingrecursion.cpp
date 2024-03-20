#include <iostream>
using namespace std;


void bubble_recursion(int *arr, int row, int col)
{
    if(row == 0)
    {
        return ;
    }

    if(row > col)
    {
        if(arr[row] < arr[col])
        {
            int temp = arr[row];
            arr[row] = arr[col];
            arr[col] = temp;
        }

        bubble_recursion(arr, row, col+1);
    }
    else
    {
        bubble_recursion(arr, row-1, 0);
    }
}

int main()
{
    int arr[] = {26, 4, 87, 1, 3};

    for(int i = 0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    bubble_recursion(arr, 4, 0);

    cout<<endl;
    for(int i = 0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}