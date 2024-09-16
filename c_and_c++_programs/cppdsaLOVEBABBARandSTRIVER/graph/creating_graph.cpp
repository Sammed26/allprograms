#include <iostream>
#include <list>
#include <unordered_map>
#include <queue>
#include <vector>

using namespace std;


class graph
{
    public: 
        unordered_map<int, list<int>> adjlist_graph;

    void add_edge(int from, int to, bool is_directed)
    {
        // is_directed == 1 , means only edge from 'from' to 'to'
        // is_directed == 0 , means edge from 'from' to 'to' and vise versa

        adjlist_graph[from].push_back(to);

        if(is_directed == 0)
        {
            adjlist_graph[to].push_back(from);
        }

    }

    void print_graph()
    {
        cout<<"printing graph"<<endl;

        for(auto i : adjlist_graph)
        {
            cout<<i.first<<" -> ";
            for(auto j : i.second)
            {
                cout<<j<<" , ";
            }

            cout<<endl;
        }
    }

    // void print_bfs_of_graph()
    // {
    //     queue<int> bfs_queue;
    //     vector<int> bfs_traversal;
    //     unordered_map<int, bool> visited;

    //     for(int i= 0; i<)

    // }

};

int main()
{
    graph g;

    int nodes;
    cout<<"enter total number of nodes"<<endl;
    cin>>nodes;

    int edges;
    cout<<"enter total number of edges"<<endl;
    cin>>edges;

    for(int i = 0; i<edges; i++)
    {
        int from_node, to_node;
        cout<<"enter from_node to to_node"<<endl;
        cin>>from_node>>to_node;

        g.add_edge(from_node, to_node, 0);
    }

    g.print_graph();
    

    return 0;
}