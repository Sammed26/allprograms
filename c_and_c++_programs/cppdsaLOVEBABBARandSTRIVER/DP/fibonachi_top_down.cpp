#include <iostream>
#include <vector>

using namespace std;

int get_fib(vector<int> &dp, int n)
{


    if(n == 0 || n == 1)
    {
        return n;
    }

    if(dp[n] != -1)
    {
        return dp[n];
    }

    dp[n-1] = get_fib(dp, n-1);
    dp[n-2] = get_fib(dp, n-2);

    dp[n] = dp[n-1] + dp[n-2];

    return dp[n];
}

int fib(int n)
{
    vector<int> dp(n+1, -1);

    return get_fib(dp, n);
}

int main()
{
    int n ;
    cout<<"enter nth term you want"<<endl;
    cin>>n;

    cout<<"nth term is "<<fib(n)<<endl;

    return 0;
}