/*
    eg. 5
    binary representation of 5 = 101
    we have take complement such that 010 i.e previous part not complemented
    and finally output complemented number. In this case 2
*/


#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter number"<<endl;
    cin>>num;
    int ans;

    if(num == 0)
    {
        ans = 1;
    }
    else
    {
        int temp = num;   // ahead in program temp is also used as mask
        int mask_count = 0;
        while(temp != 0)
        {
            mask_count++;
            temp = temp>>1;
        }
        // cout<<mask_count<<endl;

        while(mask_count != 0)
        {
            temp = (temp<<1) | 1;    // here temp is used as mask
            mask_count--;
        }
        // cout<<temp<<endl;

        ans = (~num) & temp;
    }

    cout<<"complemented number is "<<ans;

    return 0;
}