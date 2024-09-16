#include <iostream>
#include <vector>

using namespace std;


void print_paths(int srow, int scol, int erow, int ecol, string anstillnow, vector<vector<bool>>& visited)
{
    
    if(srow == erow && scol == ecol)
    {
        cout<<anstillnow<<endl;

        return ;
    }

    // returned from here when the path is already visited
    if(visited[srow][scol])
    {
        return ;
    }

    visited[srow][scol] = true;

    // for going UP
    if(srow > erow)
    {
        print_paths((srow - 1), scol, erow, ecol, anstillnow+" U", visited);
    }

    // for going left
    if(scol > ecol)
    {
        print_paths(srow, scol-1, erow, ecol, anstillnow+" L", visited);
    }

    // for going down
    if(srow < erow)
    {
        print_paths(srow+1, scol, erow, ecol, anstillnow+" D", visited);
    }

    // for going right
    if(scol < ecol)
    {
        print_paths(srow, scol+1, erow, ecol, anstillnow+" R", visited);
    }

    visited[srow][scol] = false;


}

void paths(int srow, int scol, int erow, int ecol, string anstillnow)
{
    
    if(srow == erow && scol == ecol)
    {
        cout<<anstillnow<<endl;

        return ;
    }

   

    // for going UP
    if(srow > erow)
    {
        paths((srow - 1), scol, erow, ecol, anstillnow+" U");
    }

    // for going left
    if(scol > ecol)
    {
        paths(srow, scol-1, erow, ecol, anstillnow+" L");
    }

    // for going down
    if(srow < erow)
    {
        paths(srow+1, scol, erow, ecol, anstillnow+" D");
    }

    // for going right
    if(scol < ecol)
    {
        paths(srow, scol+1, erow, ecol, anstillnow+" R");
    }

}

int main()
{
    
    vector<vector<bool>> visited = {
        {false, false, false},
        {false, false, false},
        {false, false, false}
    };

    print_paths(1, 1, 4, 4, "", visited);

    // paths(1, 1, 3, 3, "");
    

    return 0;
}