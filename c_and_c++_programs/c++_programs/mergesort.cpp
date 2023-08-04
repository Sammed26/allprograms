#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int h)
{
    int n1 = m-l + 1;
    int n2 = h - m;
    int temp1[n1], temp2[n2];

    for(int i = 0; i<n1; i++)
    {
        temp1[i] = arr[l+i];
    }
    for(int i = 0; i<n2; i++)
    {
        temp2[i] = arr[m + 1 + i];
    }

    int i = 0; 
    int j = 0;
    int k = l;

    while((i<n1) && (j<n2))
    {
        if(temp1[i] <= temp2[j])
        {
            arr[k] = temp1[i];
            i++;
        }
        else
        {
            arr[k] = temp2[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        arr[k] = temp1[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        arr[k] = temp2[j];
        j++;
        k++;
    }

}

void mergesort(int *arr, int l, int h)
{
    int mid;
    if(l < h)
    {
        mid = (l+(h-1))/2;
        mergesort(arr, l, mid);
        mergesort(arr, (mid+1), h);
        merge(arr, l, mid, h);
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

    mergesort(array, 0, 10);
    display(array, 10);


    return 0;
}