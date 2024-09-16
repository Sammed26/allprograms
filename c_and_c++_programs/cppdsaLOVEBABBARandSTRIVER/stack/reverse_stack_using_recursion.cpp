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

void insert_at_bottom(stack<int> &sta, int element)
{
    if(sta.empty())
    {
        sta.push(element);
        return ;
    }

    int top_ele = sta.top();

    sta.pop();

    insert_at_bottom(sta, element);

    sta.push(top_ele);

}

void reverse(stack<int>& sta)
{
    if(sta.empty())
    {
        return ;
    }

    int top_ele = sta.top();
    sta.pop();

    reverse(sta);

    insert_at_bottom(sta, top_ele);


}


int main()
{
    stack<int> original;
    original.push(1);
    original.push(2);
    original.push(3);
    original.push(4);
    original.push(5);
    original.push(6);
    original.push(7);
    original.push(8);

    cout<<"before reversing"<<endl;

    print(original);
    

    reverse(original);

    cout<<"after reversing"<<endl;

    print(original);

    // insert_at_bottom(original, 10);

    // print(original);

    return 0;
}