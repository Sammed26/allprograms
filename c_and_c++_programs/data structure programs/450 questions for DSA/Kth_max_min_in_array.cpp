#include <iostream>
using namespace std;

void insertion_sort(int *array, int n)
{
    int i, j;
    
    for(i = 1; i<= n-1; i++)
    {
        int key = array[i];
        j = i - 1;
        while((j >= 0) && (array[j] > key))
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
    
}

void print(int *array, int n)
{
    for(int i = 0; i<n; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
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
    insertion_sort(array, size);
    print(array, size);
    int s, l;
    cout<<"enter what th smallest and what th largest element you need";
    cin>>s>>l;
    cout<<s<<" th smallest element is "<<array[s - 1]<<endl
        <<l<<" th largest element is "<<array[size - l]<<endl;


    return 0;
}