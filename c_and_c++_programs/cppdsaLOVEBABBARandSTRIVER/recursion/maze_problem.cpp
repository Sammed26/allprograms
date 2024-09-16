#include <iostream>
#include <vector>

using namespace std;

int only_right_down(int srow, int scol, int erow, int ecol)
{
    if(srow == erow || scol == ecol)
    {
        return 1;
    }

    int firstans = only_right_down((srow+1), scol, erow, ecol);
    int secondans = only_right_down(srow, (scol+1), erow, ecol);

    return (firstans + secondans);
}

vector<string> print_path_maze(int srow, int scol, int erow, int ecol, vector<string> ans, string anstillnow)
{
    if((srow == erow) && (scol == ecol))
    {
        ans.push_back(anstillnow);
        // cout<<anstillnow<<endl;
        return ans;
    }

    vector<string> leftans;
    if(srow < erow)
    {
        leftans = print_path_maze((srow + 1), scol, erow, ecol, ans, anstillnow+" Down");
    }
    vector<string> rightans;
    if(scol < ecol)
    {
        rightans = print_path_maze(srow, (scol + 1), erow, ecol, ans, anstillnow+" Rigth");
    }

    vector<string> diagonalans;
    if(scol < ecol && srow < erow)
    {
        diagonalans = print_path_maze((srow + 1), (scol + 1), erow, ecol, ans, anstillnow+" diagonal");
    }

    for(int i = 0; i<leftans.size(); i++)
    {
        ans.push_back(leftans[i]);
    }
    for(int i = 0; i<rightans.size(); i++)
    {
        ans.push_back(rightans[i]);
    }
    for(int i = 0; i<diagonalans.size(); i++)
    {
        ans.push_back(diagonalans[i]);
    }
    

    return ans;
}


vector<string> path_maze_including_all_directions(int srow, int scol, int erow, int ecol, vector<string> ans, string anstillnow)
{
    if((srow == erow) && (scol == ecol))
    {
        ans.push_back(anstillnow);
        // cout<<anstillnow<<endl;
        return ans;
    }

    vector<string> downans;
    if(srow < erow)
    {
        downans = path_maze_including_all_directions((srow + 1), scol, erow, ecol, ans, anstillnow+" Down");
    }
    vector<string> rightans;
    if(scol < ecol)
    {
        rightans = path_maze_including_all_directions(srow, (scol + 1), erow, ecol, ans, anstillnow+" Rigth");
    }

    vector<string> diagonalans;
    if(scol < ecol && srow < erow)
    {
        diagonalans = path_maze_including_all_directions((srow + 1), (scol + 1), erow, ecol, ans, anstillnow+" diagonal");
    }
    if(scol > ecol && srow > erow)
    {
        diagonalans = path_maze_including_all_directions((srow - 1), (scol - 1), erow, ecol, ans, anstillnow+" diagonal");
    }
    vector<string> upans;
    if(srow > erow)
    {
        upans = path_maze_including_all_directions((srow - 1), scol, erow, ecol, ans, anstillnow+" up");
    }
    vector<string> leftans;
    if(scol > ecol)
    {
        leftans = path_maze_including_all_directions(srow, (scol - 1), erow, ecol, ans, anstillnow+" Left");
    }

    for(int i = 0; i<downans.size(); i++)
    {
        ans.push_back(downans[i]);
    }
    for(int i = 0; i<rightans.size(); i++)
    {
        ans.push_back(rightans[i]);
    }
    for(int i = 0; i<diagonalans.size(); i++)
    {
        ans.push_back(diagonalans[i]);
    }
    for(int i = 0; i<upans.size(); i++)
    {
        ans.push_back(upans[i]);
    }
    for(int i = 0; i<leftans.size(); i++)
    {
        ans.push_back(leftans[i]);
    }
    

    return ans;
}






int main()
{

    // int ans = only_right_down(1, 1, 4, 4);

    // cout<<ans<<endl;

    vector<string> ans;
    ans = path_maze_including_all_directions(3, 3, 1, 1, ans, "");

    for(int i = 0; i<ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }


    return 0;
}