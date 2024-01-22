// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;

int sumSubarrayMins(int* arr) {
        int no_of_subarrs = 1;    // this is for array consisting of size = 1
        int incre_in_subarrs = 2; // for array size = 2, subarrays = no_of_subarrs + incre_in_subarrs

        // pattern for no. of subarrays
        // 1 3 6 10 15 21

        int arr_size = sizeof(arr)/sizeof(arr[0]);

        int i = 1;
        while(i != arr_size)
        {
            no_of_subarrs = no_of_subarrs + incre_in_subarrs;
            incre_in_subarrs++;
        }

    return no_of_subarrs;
}

int main() {
    // Write C++ code here
    int arr[] = {1, 2, 3, 4};
    
    
    int ans = sumSubarrayMins(arr);

    cout<<ans<<endl;

    return 0;
}