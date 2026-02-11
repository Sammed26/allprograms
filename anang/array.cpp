#include <iostream>
using namespace std;

int main()
{
    char nums[50];
    // nums[2] = 7;
    // cout<<nums[0]<<endl;
    // cout<<nums[1]<<endl;
    // cout<<nums[2]<<endl;
    // cout<<nums[3]<<endl;
    // cout<<nums[4]<<endl;
    // nums[1] = 7;

    for(int i = 0; i<50; i++)
    {
        cout<<(long long)&nums[i]<<" ";
    }

    return 0;
}