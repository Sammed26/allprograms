#include <iostream>
#include <vector>
#include <stack>

using namespace std;


void get_ans(vector<int> &prices, vector<int> &ans)
{
    stack<int> st;

    st.push(prices[0]);
    ans[0] = 0;
    for(int i = 1; i<prices.size(); i++)
    {
        int popped_elements = 0;
        while(!st.empty() && st.top() < prices[i])
        {
            cout<<"popped";
            popped_elements++;
            st.pop();
        }
        cout<<endl;
        st.push(prices[i]);

        ans[i] = popped_elements;
    }

}

int main()
{
    vector<int> prices = {100, 80, 60, 70, 60, 75, 85};
                        // 0,  0,  0,  1,  0,  3,  5 
    vector<int> ans(prices.size(), 0);

    int index = prices.size()-1;
    get_ans(prices, ans);

    cout<<endl;
    for(int i = 0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}