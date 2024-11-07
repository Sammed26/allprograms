#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>

using namespace std;

int main()
{
    unordered_map<char, pair<char, vector<int>>> adj;

    char present_state;
    char next_state;
    int input;
    int output;


    int last_input = 1;

    cout<<"enter input and for last input enter 1 like a b 0 1 0"<<endl;

    set<char> s;
    while(last_input)
    {
        cin>>present_state>>next_state>>input>>output>>last_input;

        s.insert(present_state);

        pair<char, vector<int>> temp;
        temp.first = next_state;
        temp.second.push_back(input);
        temp.second.push_back(output);

        adj[present_state] = temp;

        if(!last_input)
        {
            break;
        }
        
    }

    for(auto i : adj)
    {
        cout<<i.first<<" "<<i.second.first<<endl;
    } 



    return 0;
}