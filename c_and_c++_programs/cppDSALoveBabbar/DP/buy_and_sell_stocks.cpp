#include <iostream>
#include <vector>

using namespace std;


int get_max_profit(vector<int> &rates, int index, vector<int> &dp)
{
    if(index >= rates.size())
    {
        return 0;
    }

    if(dp[index] != -1)
    {
        return dp[index];
    }

    int maxi = INT_MIN;
    for(int i = index+1; i<rates.size(); i++)
    {
        int tempmax = max((rates[i]-rates[index]), get_max_profit(rates, index+1, dp));
        maxi = max(maxi, tempmax);
    }

    dp[index] = maxi;
    return maxi;
}

int main()
{
    vector<int> rates = {3, 5, 7, 2, 8, 10, 1, 12, 6, 4, 15, 13, 17, 8, 11};

    int index = 0;
    vector<int> dp(rates.size()+1, -1);
    int ans = get_max_profit(rates, index, dp);

    if(ans == -1)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }

    return 0;
}