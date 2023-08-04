// find Largest sum contiguous Subarray [V. IMP]

#include <iostream>
using namespace std;

void find_max_sum_subarray(int* array, int size, int max_array_length)
{
    int previous_sum = 0;
    int current_sum = 0;
    int sub_array[max_array_length];
    int temp_sub_array[max_array_length];
    for(int i = 0; i<size; i++)
    {
        if((size + 1 - max_array_length) == i)
        {
            goto end;
        }
        else
        {
            for(int j = 0; j<max_array_length; j++)
            {
                temp_sub_array[j] = i+j;
                current_sum += array[i+j];
            }
        }
        if(previous_sum < current_sum)
        {
            for(int i =0; i<max_array_length; i++)
            {
                sub_array[i] = temp_sub_array[i];
            }
            previous_sum = current_sum;
        }
            current_sum = 0;
    }
    end:
    cout<<"printing subarray"<<endl;
    for(int i = 0; i<max_array_length; i++)
    {
        cout<<sub_array[i]<<" ";
    }
    cout<<"indexes give maximum sum as "<<previous_sum<<endl;
    cout<<endl;
}

int main()
{                       
    int arr[10] = {3, 56, 225, 89, 4, 12, 98, 4, 67, 45};
    int max_subarray_size;
    cout<<"enter the maximum subarray size ex. 2 size array or n size array"<<endl;
    cin>>max_subarray_size;

    find_max_sum_subarray(arr, 10, max_subarray_size);


    return 0;
}