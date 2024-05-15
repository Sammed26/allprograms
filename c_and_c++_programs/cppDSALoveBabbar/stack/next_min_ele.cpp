#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    int array[] = {3, 4, 1, 3, 8, 3, 7};

    stack<int> st;

    st.push(-1);

    vector<int> ans;
    for(int i = 6; i>=0; i--)
    {
        int curr =  array[i];

        while(st.top() >= curr)
        {
            st.pop();
        }

        ans.push_back(st.top());
        st.push(curr);
    }

    for(int i = ans.size()-1; i>=0; i--)
    {
        cout<<ans[i]<<" ";
    }
    


    return 0;
}