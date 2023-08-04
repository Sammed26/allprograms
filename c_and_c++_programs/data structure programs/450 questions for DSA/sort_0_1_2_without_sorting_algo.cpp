#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"enter array size"<<endl;
    cin>>size;

    int array[size];
    cout<<"enter array, only the repetation 0, 1 and 2 numbers are allowed"<<endl;
    for(int i = 0; i<size; i++)
    {
        cin>>array[i];
    }
    int total_1 = 0;
    int total_2 = 0;
    int total_0 = 0;

    for(int i = 0; i<size; i++)
    {
        if(array[i] == 0)
        {
            total_0++;
        }
        if(array[i] == 1)
        {
            total_1++;
        }
        if(array[i] == 2)
        {
            total_2++;
        }
    }

    int j = 0;
    for(j = 0; j<total_0; j++)
    {
        array[j] = 0;
    }
    for(j; j<(total_0 + total_1); j++)
    {
        array[j] = 1;
    }
    for(j; j<size; j++)
    {
        array[j] = 2;
    }

    cout<<"printing sorted array ------++++"<<endl;
    for(int k = 0; k<size; k++)
    {
        cout<<array[k];
    }

    return 0;
}