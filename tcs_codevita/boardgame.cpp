#include <bits/stdc++.h>

using namespace std;


int get_min_path(int m, int n, vector<vector<int>> &grid, int sr, int sc, int dr, int dc, int mr, int mc)
{

    if(sr == dr && sc == dc)
    {
        return 0;
    }

    pair<int, int> forward = {(sr+mr), (sc+mc)};
    // rotate 180 clockwise/anticlockwise
    pair<int, int> backward = {(sr-mr), (sc-mc)};
    pair<int, int> right = {(sc+mc), (sr-mr)};
    pair<int, int> left = {(sc-mc), (sr+mr)};

    // cout<<forward.first<<" "<<forward.second<<endl;
    // cout<<backward.first<<" "<<backward.second<<endl;
    // cout<<right.first<<" "<<right.second<<endl;
    // cout<<left.first<<" "<<left.second<<endl;


    int fans = 0;
    int bans = 0;
    int lans = 0;
    int rans = 0;

    if(((dr-forward.first + dc-forward.second) <= (dr-sr + dc-sc)) && (forward.first >= 0 && forward.first < m) && (forward.second >= 0 && forward.second < n) && grid[forward.first][forward.second] == 0)
    {
        fans = get_min_path(m, n, grid, forward.first, forward.second, dr, dc, mr, mc);
    }
    else
    {
        return INT_MAX;
    }

    if(((dr-backward.first + dc-backward.second) <= (dr-sr + dc-sc)) && (backward.first >= 0 && backward.first < m) && (backward.second >= 0 && backward.second < n) && grid[backward.first][backward.second] == 0)
    {
        bans = get_min_path(m, n, grid, backward.first, backward.second, dr, dc, mr, mc);
    }
    else
    {
        return INT_MAX;
    }

    if(((dr-right.first + dc-right.second) <= (dr-sr + dc-sc)) && (right.first >= 0 && right.first < m) && (right.second >= 0 && right.second < n) && grid[right.first][right.second] == 0)
    {
        rans = get_min_path(m, n, grid, right.first, right.second, dr, dc, mr, mc);
    }
    else
    {
        return INT_MAX;
    }

    if(((dr-left.first + dc-left.second) <= (dr-sr + dc-sc)) && (left.first >= 0 && left.first < m) && (left.second >= 0 && left.second < n) && grid[left.first][left.second] == 0)
    {
        lans = get_min_path(m, n, grid, left.first, left.second, dr, dc, mr, mc);
    }
    else
    {
        return INT_MAX;
    }



    return min(fans, min(bans, min(rans, lans)));
}


int main()
{
    int m, n;
    cin>>m>>n;

    vector<vector<int>> grid(m, vector<int>(n, 0));

    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            int value;
            cin>>value;
            grid[i][j] = value;
        }  
    } 

    int s_row, s_col;
    cin>>s_row>>s_col;

    int d_row, d_col;
    cin>>d_row>>d_col;


    int m_row, m_col;
    cin>>m_row>>m_col;

    int min_path_len = get_min_path(m, n, grid, s_row, s_col, d_row, d_col, m_row, m_col);


    cout<<min_path_len<<endl;

    return 0;
}