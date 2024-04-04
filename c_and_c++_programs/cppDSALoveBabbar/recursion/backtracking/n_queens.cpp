#include <iostream>
#include <vector>
#define n 4

using namespace std;

void print_possible_ans(bool board[n][n])
{
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(board[i][j]) 
            {
                cout<<"Q ";
            }
        }
        // cout<<endl;
    }

    cout<<endl;
}


bool issafe(bool board[n][n], int row, int col)
{
    for(int i = row; i>= 0; i--)
    {
        if(board[i][col])
        {
            return false;
        }
    }

    // for left diagonal cheak
    for(int r = row, c = col; r >= 0 && c>= 0; r--, c--)
    {
        if(board[r][c])
        {
            return false;
        }
    }

    // for right diagonal cheak
    for (int r = row, c = col; c >= 0 && r < n; r++, c--)
    {
        if (board[r][c])
        {
            return false;
        }
    }

    return true;

}

int nqueen(bool board[n][n], int row)
{
    
    if(row == n)
    {
        print_possible_ans(board);
        cout<<endl;
        return 1;
    }

    int count = 0;
    for(int col = 0; col < n; col++)
    {
        if(issafe(board, row, col))
        {
            board[row][col] = 1;
            count += nqueen(board, row+1);
            board[row][col] = 0;
        }
    }

    return count;

}


int main()
{

    bool board[n][n] = {
        {false, false, false, false},
        {false, false, false, false},
        {false, false, false, false},
        {false, false, false, false}
    };

    int ways = nqueen(board, 0);
    cout<<ways<<endl;


    return 0;
}