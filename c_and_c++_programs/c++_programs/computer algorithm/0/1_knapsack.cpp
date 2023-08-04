#include <iostream>
using namespace std;

int m, n;
void knapsack(int profit[], int weight[])
{
    int tab[n+1][m+1];
    for(int i = 0; i<=n; i++)
    {
        for(int j = 0; j<=m; j++)
        {
            tab[i][j] = 0;
        }
    }


    int value = 0;
    for(int i = 0; i<=n; i++)
    {
        for(int j = 0; j<=m; j++)
        {
            if((i-1) <0)
            {
                tab[i][j] = 0;
            }
            else if(((j-weight[i]) <0) && ((i-1) > 0))
            {
                tab[i][j] = tab[i-1][j];
            }
            
            else
            {
                value = max(tab[i-1][j], tab[i-1][j-weight[i]] + profit[i]);
                tab[i][j] = value;
            }

        }
    }

    cout<<"printing result"<<endl;
    for(int i = 0; i<=n; i++)
    {
        for(int j = 0; j<=m; j++)
        {
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
}

int max(int a, int b)
{
    //if((a < ))
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    //int m, n;  // m = size of knapsack, n = number of elements
    cout<<"enter size of knapsack and number of elements"<<endl;
    m = 8, n = 4;
    // cin>>m>>n;
     int profit[n] = {1, 2, 5, 6}, weight[n] = {2, 3, 4, 5};
    // cout<<"enter profit"<<endl;
    // for(int i = 0; i<n; i++)
    // {
    //     cin>>profit[i];
    // }
    
    // cout<<"enter weight"<<endl;
    // for(int i = 0; i<n; i++)
    // {
    //     cin>>weight[i];
    // }


    int table[n+1][m+1];
    //int *tablepointer = table;
    knapsack(profit, weight);

    return 0;
}