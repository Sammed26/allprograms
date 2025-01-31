#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool is_prime(int num)
{
    if(num < 2) return 0;
    
    if(num == 2) return 1;

    for(int i = 2; i<=num/2; i++)
    {
        if(num%i == 0) return 0;
    }

    return 1;
}

void get_possible_nums(vector<int> &nums, string input)
{
    // cout<<"going in to function"<<endl;

    int curr_len = 1;
    for(int i = 0; i<input.length(); i++)
    {
        for(int j = 0; j<input.length()-i; j++)
        {
            int poss_num = 0;
            for(int k = j; k<=(j+i); k++)
            {
                poss_num = poss_num*10 + (input[k]-48);
            }

            // cout<<poss_num<<" ";

            if(is_prime(poss_num))
            {
                nums.push_back(poss_num);
            }
        
        }
    }

    // cout<<endl<<"comming out of function"<<endl;
}

int main()
{
    string input = "";
    cout<<"enter number in string format"<<endl;
    cin>>input;

    vector<int> possible_nums;

    get_possible_nums(possible_nums, input);

    for(int i = 0; i<possible_nums.size(); i++)
    {
        cout<<possible_nums[i]<<" ";
    }

    sort(possible_nums.begin(), possible_nums.end(), greater<int>());

    int ans = 0;

    for(int i = 0; i<possible_nums.size() && i<10; i++)
    {
        ans += possible_nums[i];
    }

    cout<<"the answer is = "<<ans<<endl;

    return 0;
}