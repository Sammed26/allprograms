#include <iostream>
#include <stack>
#include <vector>



int brute_force_approach(vector<vector<int>>& M, int n) 
{
    // code here 
        
    for(int i = 0; i<n; i++)
    {
        bool known_to_everyone = 0;
        bool knows_anyone_else = 0;
            
        // this is for finding whether tha ith person knows anyone else
        for(int j = 0; j<n; j++)
        {
            if(i != j)
            {
                if(M[i][j] == 1)
                {
                    knows_anyone_else = 1;
                    break;
                }
            }
        }
            
        // this if for finding whether the ith person is known to everyone
        for(int j = 0; j<n; j++)
        {
            if(i != j)
            {
                if(M[j][i] == 0)
                {
                    known_to_everyone = 1;
                    break;
                }
            }
        }
            
            
        if(!known_to_everyone && !knows_anyone_else)
        {
            return i;
        }
            
    }
        
    return -1;
        
}










int celebrity(vector<vector<int> >& M, int n) 
{
    // code here 
        
    stack<int> s;
    for(int i = 0; i<n; i++)
    {
        s.push(i);
    }
        
    while(s.size() > 1)
    {
        int a = s.top();
        s.pop();
            
        int b = s.top();
        s.pop();
            
        if(M[a][b] == 1)
        {
            // a knows b, then discard a
            s.push(b);
        }
        else
        {
            // b knows a, then discard b
            s.push(a);
        }
            
    }
        
    // now remaining 1 is potential candidate for celebrity
        
    // in that element column all should be 1
    for(int i = 0; i<n; i++)
    {
        if(i != s.top())
        {
            if(M[i][s.top()] == 0)
            {
                return -1;
            }
                
        }
    }
    // in that element row all should be 0
    for(int i = 0; i<n; i++)
    {
        if(i != s.top())
        {
            if(M[s.top()][i] == 1)
            {
                return -1;
            }
        }
    }
        
    return s.top();
        
}


int main()
{
    return 0;
}