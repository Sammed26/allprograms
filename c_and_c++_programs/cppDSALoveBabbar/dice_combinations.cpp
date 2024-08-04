#include <iostream>
#include <vector>
using namespace std;


void get_all_sums(vector<vector<int>>& ans, vector<int>& output, int number, int &sum, int target)
{
    if(sum > target)
    {
        return ;
    }
    if(number == 7 || sum == target)
    {
        ans.push_back(output);
        return;
    }

    for(int i = 1; i<=6; i++)
    {
        // include
        output.push_back(number);
        int tempsum = sum + number;
        get_all_sums(ans, output, i, tempsum, target);


        // exclude
        
        get_all_sums(ans, output, i, sum, target);
    }
}

int sumans = 0;
void get_number_of_sums(int sum, int target)
{
    if(target == sum)
    {
        sumans++;
        return ;
    }
    if(sum > target)
    {
        return ;
    }

    for(int i = 1; i<7; i++)
    {
        int tempsum = sum + i;
        get_number_of_sums(tempsum, target);
    }
}

int main()
{
    int target;
    cout<<"enter sum you want"<<endl;
    cin>>target;

    vector<vector<int>> ans;
    vector<int> output;

    int number = 1;
    int sum = 0;
    // get_all_sums(ans, output, number, sum, target);

    // for(int i = 0; i<ans.size(); i++)
    // {
    //     for(int j = 0; j<ans[i].size(); j++)
    //     {
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    get_number_of_sums(0, target);

    cout<<sumans<<endl;

    return 0;
}