#include <iostream>
#include <stack>

using namespace std;

bool is_redundant(string &exp)
{
    stack<char> ch_stack;

    for(int i = 0; i<exp.length(); i++)
    {
        if(exp[i] == '(' || exp[i] == '+' || exp[i] == '-' || exp[i] == '/' || exp[i] == '*')
        {
            ch_stack.push(exp[i]);
        }
        else
        {
            if(exp[i] == ')')
            {
                char top_ele = ch_stack.top();
                ch_stack.pop();
                if(top_ele == '(')
                {
                    return 0;
                }
            }
        }
    }

    return 1;
}

int main()
{
    string expression;
    cout<<"enter expression"<<endl;
    cin>>expression;

    if(is_redundant(expression))
    {
        cout<<expression<<" is not redundant"<<endl;
    }
    else
    {
        cout<<"given expression "<<expression<<" is redundant"<<endl;
    }

    return 0;
}