#include <iostream>
#include <stack>

using namespace std;

void print(stack<int> sta)
{
    if(sta.empty())
    {
        cout<<endl;
        return ;
    }
    int topele = sta.top();

    sta.pop();

    cout<<topele<<" ";
    print(sta);

    sta.push(topele);
}

void insert_at_right_pos(stack<int> &st, int ele)
{
    if(st.empty() || (st.top() > ele))
    {
        st.push(ele);
        return ;
    }

    int top_ele = st.top();
    st.pop();

    insert_at_right_pos(st, ele);

    st.push(top_ele);
    
}

void sort_stack(stack<int> &st)
{
    if(st.empty())
    {
        return ;
    }

    int top_ele = st.top();

    st.pop();

    sort_stack(st);

    insert_at_right_pos(st, top_ele);

    

}

int main()
{
    stack<int> st;

    st.push(8);
    st.push(65);
    st.push(4);
    st.push(1);
    st.push(54);
    st.push(80);
    st.push(8);
    st.push(98);
    st.push(18);

    cout<<"before sorting"<<endl;
    print(st);

    sort_stack(st);
    // insert_at_right_pos(st, 4);

    cout<<"after sorting"<<endl;
    print(st);

    

    return 0;
}