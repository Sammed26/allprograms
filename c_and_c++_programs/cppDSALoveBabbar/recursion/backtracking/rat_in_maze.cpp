#include <iostream>
#include <vector>
using namespace std;

bool is_safe(int curr_row, int curr_col, vector<vector<bool>>& visited, vector<vector<bool>>& maze, int size)
{
    if(curr_col < 0 || curr_col >= size)
    {
        return 0;
    }
    if(curr_row < 0 || curr_row >= size)
    {
        return 0;
    }

    if(visited[curr_row][curr_col] == 1)
    {
        return 0;
    }
    if(maze[curr_row][curr_col] == 0)
    {
        return 0;
    }

    return 1;
}

void get_paths(string& ans, vector<vector<bool>>& maze, vector<vector<bool>>& visited, int startrow, int startcol, int endrow, int endcol)
{
    // cout<<startrow<<" "<<startcol<<endl;
    if(startcol == endcol && startrow == endrow)
    {
        cout<<ans<<endl;
        return ;
    }

    visited[startrow][startcol] = 1;

    // cheak can i go down
    if(is_safe(startrow+1, startcol, visited, maze, maze.size()))
    {
        ans += "D";
        get_paths(ans, maze, visited, startrow+1, startcol, endrow, endcol);
        ans.pop_back();
    }

    // cheak can i go up
    if(is_safe(startrow-1, startcol, visited, maze, maze.size()))
    {
        ans += "U";
        get_paths(ans, maze, visited, startrow-1, startcol, endrow, endcol);
        ans.pop_back();
    }

    // cheak can i go right
    if(is_safe(startrow, startcol+1, visited, maze, maze.size()))
    {
        ans += "R";
        get_paths(ans, maze, visited, startrow, startcol+1, endrow, endcol);
        ans.pop_back();
    }

    // cheak can i go left
    if(is_safe(startrow, startcol-1, visited, maze, maze.size()))
    {
        ans += "L";
        get_paths(ans, maze, visited, startrow, startcol-1, endrow, endcol);
        ans.pop_back();
    }

    visited[startrow][startcol] = 0;

}

int main()
{
    vector<vector<bool>> maze = {{1, 1, 1, 0}, {1, 1, 0, 1}, {0, 1, 1, 0}, {0, 1, 1, 1}};


    vector<vector<bool>> visited = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
    for(int i = 0; i<maze.size(); i++)
    {
        for(int j = 0; j<maze[i].size(); j++)
        {
            cout<<maze[i][j]<<" ";
        }
        cout<<endl;
    }

    string ans = "";
    int startrow = 0;
    int startcol = 0;
    int endrow = 3;
    int endcol = 3;

    get_paths(ans, maze, visited, startrow, startcol, endrow, endcol);

    return 0;
}

