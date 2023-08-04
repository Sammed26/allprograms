// move all the negative elements to one side of array
#include <iostream>
using namespace std;

void print(int *array, int n)
{
    for(int i = 0; i<n; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

void move_negative_to_one_side(int *array, int n)
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
    cout<<"you entered array"<<endl;
    print(array, size);
    
    cout<<"array after moving all negative elements to one side"<<endl;
    move_negative_to_one_side(array, size);
    print(array, size);

    return 0;
}