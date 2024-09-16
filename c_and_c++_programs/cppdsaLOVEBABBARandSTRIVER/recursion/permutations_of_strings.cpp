#include <iostream>
#include <vector>
using namespace std;


void permutations(string unprocessed, string processed, int index)
{
    if(index == unprocessed.length())
    {
        cout<<processed<<" ";

        return ;
    }

    for(int i = 0; i<= processed.length(); i++)
    {
        string temp = processed.substr(0, i) + unprocessed[index] + processed.substr(i, processed.length());
        permutations(unprocessed, temp, index+1);
    }

}



// this is not working properly
vector<string> returning_permutations(string unprocessed, string processed, int index, vector<string> ans)
{
    if(index == unprocessed.length())
    {
        ans.push_back(processed);
        return ans;
    }


    vector<string> localans;
    for(int i = 0; i<=processed.length(); i++)
    {
        string temp = processed.substr(0, i) + unprocessed[index] + processed.substr(i, processed.length());

        localans = returning_permutations(unprocessed, temp, index+1, ans);

        for(int j = 0; j<localans.size(); j++)
        {
            ans.push_back(localans[j]);
        }
    }

    return ans;

}



int main()
{
    int index = 0;
    string str = "abcd";

    // permutations(str, "", index);

    vector<string> ans;
    ans = returning_permutations(str, "", 0, ans);

    for(int i = 0; i<ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }

    return 0;
}