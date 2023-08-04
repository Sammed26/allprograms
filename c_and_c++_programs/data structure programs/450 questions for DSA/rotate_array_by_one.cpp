//Write a program to cyclically rotate an array by one.

#include <iostream>
using namespace std;

void left_rotate_array(int *arr, int size)
{
    int i, j, temp;
    temp = arr[0];
     
    for(i = 0; i<size; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[size - 1] = temp;
}

void right_rotate_array(int *arr, int size)
{
    int i, j, temp;
    temp = arr[size-1];
     
    for(i = (size- 1); i>=0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}

void display(int *arr, int size)
{
    cout<<"displaying array"<<endl;
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int array[5] = {48, 26, 21, 27, 29}, choice;

    cout<<"enter choice"<<endl<<"1 = for left rotate"<<endl<<"2 = for right rotation"<<endl;
    cin>>choice;

    if(choice == 1)
    {
        left_rotate_array(array, 5);
        display(array, 5);
    }
    else if(choice == 2)
    {
        right_rotate_array(array, 5);
        display(array, 5);
    }
    else
    {
        cout<<"enter correct choice"<<endl;
    }

    return 0;
}