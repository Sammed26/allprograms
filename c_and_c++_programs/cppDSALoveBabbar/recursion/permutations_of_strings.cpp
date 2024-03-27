#include <iostream>
#include <vector>
using namespace std;


void permutations(string unprocessed, string processed, int index)
{
    if(index == unprocessed.length())
    {
        cout<<processed<<" ";

        return ;
    }

    for(int i = 0; i<= processed.length(); i++)
    {
        string temp = processed.substr(0, i) + unprocessed[index] + processed.substr(i, processed.length());
        permutations(unprocessed, temp, index+1);
    }

}




int main()
{
    int index = 0;
    string str = "abcd";

    permutations(str, "", index);

    return 0;
}