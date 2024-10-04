#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(vector<int> adj[], vector<int> &visited, int node, vector<int> &dfs_traversal)
{
    stack<int> s;
    s.push(node);
    visited[node] = 1;

    while(!s.empty())
    {
        int element = s.top();
        s.pop();
        dfs_traversal.push_back(element);

        for(int i = 0; i<adj[element].size(); i++)
        {
            if(visited[adj[element][i]] == 0)
            {
                visited[adj[element][i]] = 1;
                s.push(adj[element][i]);
            }
        }

    }
}

int main()
{
    int n, m;
    cout<<"enter number of nodes and edges"<<endl;
    cin>>n>>m;

    vector<int> adj[n+1];
    cout<<"enter edges like 1 2"<<endl;
    for(int i = 0; i<m; i++)
    {
        int u, v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> visited(n+1, 0);
    vector<int> dfs_traversal;


    for(int i= 1; i<=n; i++)
    {
        cout<<i<<" -> ";
        for(int j = 0; j<adj[i].size(); j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i = 1; i<=n; i++)
    {
        if(!visited[i])
        {
            dfs(adj, visited, i, dfs_traversal);
        }
    }

    cout<<"printing dfs traversal"<<endl;
    for(int i= 0; i<dfs_traversal.size(); i++)
    {
        cout<<dfs_traversal[i]<<" ";
    }

    return 0;
}