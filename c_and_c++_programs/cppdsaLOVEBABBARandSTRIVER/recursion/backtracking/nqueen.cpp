#include <iostream>
#include <vector>
using namespace std;

int number_of_solutions = 0;

void print(vector<vector<bool>> &board, int n)
{
    number_of_solutions++;
    cout<<"printing possible solution"<<endl;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool safe(vector<vector<bool>> &board, int n, int col, int row)
{
    int colx = col;
    int rowx = row;
    while(colx >= 0)
    {
        if(board[rowx][colx] == 1)
        {
            return 0;
        }
        colx--;
    }

    // cheak for leftward, top locations
    colx = col;
    rowx = row;
    while(colx >= 0 && rowx >= 0)
    {
        if(board[rowx][colx] == 1)
        {
            return 0;
        }
        rowx--;
        colx--;
    }

    // cheak for leftward, bottom locations
    colx = col;
    rowx = row;
    while(colx >= 0 && rowx < n)
    {
        if(board[rowx][colx] == 1)
        {
            return 0;
        }
        rowx++;
        colx--;
    }

    return 1;
}

void queen(vector<vector<bool>> &board, int n, int col)
{
    // base case
    if(col == n)
    {
        // cout<<"entered into base case"<<endl;
        print(board, n);
        return ;
    }

    for(int row = 0; row < n; row++)
    {
        if(safe(board, n, col, row))
        {
            board[row][col] = 1;
            queen(board, n, col+1);
            board[row][col] = 0;
        }
    }
}



int main()
{
    int n;
    cout<<"enter n value of your board n*n"<<endl;
    cin>>n;

    vector<vector<bool>> board;

    vector<bool> temp(n, 0);
    for(int i = 0; i<n; i++)
    {
        board.push_back(temp);
    }

    int col = 0;
    queen(board, n, col);


    cout<<"possible solutions = "<<number_of_solutions<<endl;

    return 0;
}