#include <iostream>
#include <stack>

using namespace std;


int cost_to_make_valid_string(string &exp)
{
    if(exp.length()%2 != 0)
    {
        return -1;
    }

    stack<char> correct;
    stack<char> incorrect;

    for(int i = 0; i<exp.length(); i++)
    {
        if(exp[i] == '{')
        {
            correct.push(exp[i]);
        }
        else
        {
            if(exp[i] == '}')
            {
                if(correct.top() == '{')
                {
                    correct.pop();
                }
                else
                {
                    incorrect.push(exp[i]);
                }
            }
            
        }
    }

    return ((correct.size() + incorrect.size())/2);
}

int main()
{
    string exp;
    cout<<"enter string of {, } to know cost to make valid"<<endl;
    cin>>exp;

    int cost = cost_to_make_valid_string(exp);

    if(cost != -1)
    {
        cout<<"cost to make string valid is "<<cost<<endl;
    }
    else
    {
        cout<<"can't make string valid"<<endl;
    }
    
    return 0;
}