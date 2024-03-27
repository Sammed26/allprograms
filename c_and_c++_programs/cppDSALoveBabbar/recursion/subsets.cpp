#include <iostream>
#include <vector>
using namespace std;

vector<string> subset_strings;

void subset(string str, string ans, int index)
{
    if(index == str.length())
    {
        subset_strings.push_back(ans);
        // cout<<ans<<" ";
        return;
    }

    // take a letter and add it
    subset(str, ans+str[index], index+1);

    // leave it
    subset(str, ans, index+1);


}


int main()
{
    // "abc"
    //-> [a, b, c, ab, ac, bc, abc]

    vector<string> ans;

    string str = "abcd";

    string ans1 = "";
    subset(str, ans1, 0);

    for(int i = 0; i<subset_strings.size(); i++)
    {
        cout<<subset_strings[i]<<" ";
    }
    cout<<endl;


    return 0;
}