#include <iostream>
using namespace std;

int main()
{
    int n, m; 
    cout<<"enter value of total number of rows"<<endl;
    cin>>m;
    cout<<"enter value of total number of columns"<<endl;
    cin>>n;

    int **arr = new int*[m];

    for(int i = 0; i<m; i++)
    {
        *(arr + i) = new int[n];
                // or
        // arr[i] = new int[m];
    }

    cout<<"enter values of array"<<endl;
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout<<"enter value of "<<(i+1)<<" and "<<(j+1)<<" index"<<endl;
            cin>>arr[i][j];
        }
    }

    cout<<"printing values of array/matrix"<<endl;
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    // deleting memory
    for(int i = 0; i<m; i++)
    {
        delete []arr[i];
    }
    delete []arr;



    return 0;
}