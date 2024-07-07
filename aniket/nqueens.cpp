#include <iostream>
#include <vector>
using namespace std;



void print_placed_queens(vector<vector<bool>> &placed, int n)
{
    cout<<"printing queens"<<endl;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout<<placed[i][j];
        }
        cout<<endl;
    }
}

bool issafe(vector<vector<bool>> &ans, int row, int col)
{
    // cheak in that column
    for(int i = row; i >= 0; i--)
    {
        if(ans[i][col] == 1)
        {
            return 0;
        }
    }

    // cheak in upward left diagonal
    for(int i = row; i>=0; i--)
    {
        for(int j = col; j>=0; j--)
        {
            if(ans[i][j] == 1)
            {
                return 0;
            }
        }
    }

    // cheak in upward right diagonal
    for(int i = row; i<=col; i++)
    {
        for(int j = col; j>=0; j--)
        {
            if(ans[i][j] == 1)
            {
                return 0;
            }
        }
    }

    return 1;
}

void nqueens(vector<vector<bool>> &ans, int row, int queens)
{
    if(row >= queens)
    {
        print_placed_queens(ans, queens);
        return ;
    }

    for(int i = 0; i<queens; i++)
    {
        if(issafe(ans, row, i))
        {
            ans[]
        }

    }

}

int main()
{
    int queens_to_place; 
    cout<<"enter how many queens you want to place"<<endl;
    cin>>queens_to_place;

    vector<vector<bool>> ans(queens_to_place, vector<bool> (queens_to_place));

    for(int i = 0; i<queens_to_place; i++)
    {
        for(int j = 0; j<queens_to_place; j++)
        {
            ans[i][j] = 0;
        }
    }

    nqueens(ans, 0, queens_to_place);

    print_placed_queens(ans, queens_to_place);

    return 0;
}