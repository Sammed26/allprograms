#include <iostream>
using namespace std;

void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int* arr, int l, int h)
{
    int pivot = arr[l];
    int j = h;
    int i = l;
    
    while(l<h)
    {
        while(arr[i] < pivot)
        {
            i++;
        }
        while(arr[j] > pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[l], &arr[j]);
    return j;
}

void quicksort(int* arr, int low, int high)
{
    if(low<high)
    {
        int j;
        j = partition(arr, low, high);
        quicksort(arr, low, j-1);
        quicksort(arr, j+1, high);
    }
}

void display(int *arr, int size)
{
    cout<<"printing array"<<endl;
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int array[10] = {25, 2, 96, 485, 343, 26, 87, 48, 2, 244};
    display(array, 10);

    quicksort(array, 0, 9);

    display(array, 10);

    return 0;
}