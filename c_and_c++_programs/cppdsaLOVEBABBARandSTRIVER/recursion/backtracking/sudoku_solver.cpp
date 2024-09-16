#include <iostream>
#include <vector>

using namespace std;

void print_sudoku(vector<vector<int>> &sudoku)
{
    cout<<"printing one of the possible solutions"<<endl;
    for(int i= 0; i<9; i++)
    {
        for(int j= 0; j<9; j++)
        {
            cout<<sudoku[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool safe(int row, int col, int curr_val, vector<vector<int>> &sudoku)
{
    // cheak in that row
    for(int i = 0; i<9; i++)
    {
        if(sudoku[row][i] == curr_val)
        {
            return 0;
        }
    }

    // cheak in that column
    for(int i = 0; i<9; i++)
    {
        if(sudoku[i][col] == curr_val)
        {
            return 0;
        }
    }

    // cheak in that 3*3 matrix
    int startrow = row - row%3;
    int startcol = col - col%3;

    for(int i = startrow; i<startrow+3; i++)
    {
        for(int j = startcol; j<startcol + 3; j++)
        {
            if(sudoku[i][j] == curr_val)
            {
                return 0;
            }
        }
    }

    return 1;
}

bool sol_sudoku(vector<vector<int>> &sudoku)
{
    // if(empty_spots == 0)
    // {
    //     print_sudoku(sudoku);

    //     return ;
    // }


    // bool all_filled = 0;
    for(int row = 0; row<9; row++)
    {
        for(int col = 0; col<9; col++)
        {
            if(sudoku[row][col] == 0)
            {
                // all_filled = 1;
                
                for(int curr_val = 1; curr_val<=9; curr_val++)
                {
                    if(safe(row, col, curr_val, sudoku))
                    {
                        sudoku[row][col] = curr_val;

                        // if solution exists then return true
                        if(sol_sudoku(sudoku))
                        {
                            return 1;
                        }

                        // backtrack
                        sudoku[row][col] = 0;
                    }
                }

                // no any valid number found to put
                return 0;
            }
        }
    }

    // no any empty spot found
    return 1;
}

int main()
{
    vector<vector<int>> sudoku = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                                  {5, 2, 0, 0, 0, 0, 0, 0, 0},
                                  {0, 8, 7, 0, 0, 0, 0, 3, 1},
                                  {0, 0, 3, 0, 1, 0, 0, 8, 0},
                                  {9, 0, 0, 8, 6, 3, 0, 0, 5},
                                  {0, 5, 0, 0, 9, 0, 6, 0, 0},
                                  {1, 3, 0, 0, 0, 0, 2, 5, 0},
                                  {0, 0, 0, 0, 0, 0, 0, 7, 4},
                                  {0, 0, 5, 2, 0, 6, 3, 0, 0}};

    // int empty_spots = 0;
    // for(int i = 0; i<9; i++)
    // {
    //     for(int j = 0; j<9; j++)
    //     {
    //         if(sudoku[i][j] == 0)
    //         {
    //             empty_spots++;
    //         }
    //     }
    // }

    sol_sudoku(sudoku);

    print_sudoku(sudoku);


    return 0;
}