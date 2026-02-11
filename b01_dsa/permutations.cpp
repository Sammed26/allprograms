#include <iostream>
#include <vector>
using namespace std;

void permut(vector<int> arr, int curr_index)
{
    // base condition
    if(arr.size() == curr_index)
    {
        // print 
        for(int i = 0; i<arr.size(); i++)
        {
            cout<<arr[i];
        }
        cout<<endl;
        return ;
    }

    // from current index to last index swap elements
    for(int i = curr_index; i<arr.size(); i++)
    {
        // swap
        int temp = arr[i];
        arr[i] = arr[curr_index];
        arr[curr_index] = temp;

        // call function for next 
        permut(arr, curr_index + 1);

        // backtract - change array to original
        temp = arr[i];
        arr[i] = arr[curr_index];
        arr[curr_index] = temp;
    }
}

int main()
{
    vector<int> array = {1, 2 , 3,5 , 4 ,6  };
    permut(array, 0);

    return 0;
}