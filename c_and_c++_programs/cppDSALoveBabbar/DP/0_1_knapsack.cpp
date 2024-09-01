#include <iostream>
#include <vector>

using namespace std;

int pro = 0;

int solve_knapsack(vector<int> &w, vector<int> &p, int weight, int index, int kn_weight, vector<vector<int>>& dp)
{
    if((index >= w.size()) || (weight >= kn_weight))
    {
        return 0;
    }

    if(dp[index][weight] != -1)
    {
        return dp[index][weight];
    }

    // exclude
    int exc = solve_knapsack(w, p, weight, index+1, kn_weight, dp);


    // include
    int inc = 0;
    if(weight + w[index] <= kn_weight)
    {
        inc = p[index] + solve_knapsack(w, p, weight+w[index], index+1, kn_weight, dp);
    }

    dp[index][weight] = max(exc, inc);

    return dp[index][weight];
}

int main()
{
    int max_weight = 0;
    int kn_weight = 7;
    int index = 0;

    vector<int> weights = {3,4,5};
    vector<int> profit = {6,8,10};
    vector<vector<int>> dp(weights.size(), vector<int>(kn_weight, -1));


    cout<<solve_knapsack(weights, profit, max_weight, index, kn_weight, dp);

    

    return 0;
}