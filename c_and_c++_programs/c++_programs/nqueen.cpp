#include <iostream>
using namespace std;

bool cheakavaliability(int placei[], int placej[], int qu, int ithindex, int jthindex)
{
    int counter = 0;
    for(int i = 0; i<qu; i++)
    {
        if((placei[i] != ithindex) && (placej[i] != ithindex) && (placei[i] != jthindex) && (placej[i] != jthindex) && ((placei[i] + placej[i]) != (ithindex + jthindex)))
        {
            counter++;
        }
    }
    if(counter == ithindex)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void nqueen(int q)
{
    cout<<"entered"<<endl;
    int spaces[q][q];
    for(int i = 0; i<q; i++)
    {
        for(int j = 0; j<q; j++)
        {
            spaces[i][j] = 0;
        }
    }
    int backtrackcount = 0;
    int notfound = 1;
    spaces[0][0] = 1;     // i is for row and j is for column

    int placedi[q], placedj[q];   // this is storing the placed queens index
    for(int i = 0 ; i<q; i++)
    {
        placedi[i] = -1;
        placedj[i] = -1;
    }
    placedi[0] = 0;
    placedj[0] = 0;
    int spacenotfound = 0;
    for(int i = 1; i<q; i++)
    {
        spacenotfound = 0;
        for(int j = 0; j<q; j++)
        {
            bool status = cheakavaliability(placedi, placedj, q, i, j);
            if(status)
            {
                spaces[i][j] = 1;
                placedi[i] = i;
                placedj[j] = j;
                spacenotfound++;
                break;
            }
        }
        if(spacenotfound == 0)
        {
            i = i-1;
        }
    }

    cout<<"printing final solution"<<endl;
    for(int k = 0; k<q; k++)
    {
        for(int s = 0; s < q; s++)
        {
            cout<<spaces[k][s]<<" ";
        }
        cout<<endl;
    }
}

 
int main()
{
    nqueen(4);

    return 0;
}