#include<iostream>
#include<vector>

using namespace std;


int fib(vector<int> &dp, int n)
{
    dp[0] = 0;
    dp[1] = 1;

    for(int i= 2; i<dp.size(); i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}

int space_optimized_fib(int n)
{
    if(n <= 1)
    {
        return n;
    }

    int prev2 = 0;
    int prev1 = 1;
    int curr = prev1 + prev2;

    for(int i = 0; i<=n; i++)
    {
        prev2 = prev1;
        prev1 = curr;

        curr = prev1 + prev2;
    }

    return curr;
}

int main()
{
    int n;
    cout<<"enter the nth term you want fib of"<<endl;
    cin>>n;

    vector<int> dp(n+1, -1);

    cout<<n<<" th term is "<<fib(dp, n)<<endl;

    return 0;
}