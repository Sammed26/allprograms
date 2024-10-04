#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(vector<int> adj[], vector<int> &visited, int node, vector<int> &bfs_t)
{
    queue<int> q;
    q.push(node);

    while(!q.empty())
    {
        int element = q.front();
        q.pop();
        visited[element] = 1;
        bfs_t.push_back(element);

        for(int i = 0; i<adj[element].size(); i++)
        {
            if(!visited[adj[element][i]])
            {
                visited[adj[element][i]] = 1;
                q.push(adj[element][i]);
            }
        }
    }

}

int main()
{
    int n, m;
    std::cout<<"enter number of nodes and number of edges"<<endl;
    cin>>n>>m;

    vector<int> adj[n+1];

    cout<<"enter edges like 1 2"<<endl;
    for(int i= 0;i<m; i++)
    {
        int u, v;
        
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i= 1; i<=n; i++)
    {
        cout<<i<<" -> ";
        for(int j = 0; j<adj[i].size(); j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

    vector<int> visited(n+1, 0);
    vector<int> bfs_traversal;
    cout<<"printing BFS traversal"<<endl;

    for(int i = 1; i<=n; i++)
    {
        if(visited[i] == 0)
        {
            bfs(adj, visited, i, bfs_traversal);
        }
    }

    for(int i = 0; i<bfs_traversal.size(); i++)
    {
        cout<<bfs_traversal[i]<<" ";
    }

    return 0;
}