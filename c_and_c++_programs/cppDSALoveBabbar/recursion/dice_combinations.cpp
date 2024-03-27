#include <iostream>
#include <vector>

using namespace std;


void combinations(string processed, int target)
{
    if(target == 0)
    {
        cout<<processed<<" ";
        return ;
    }

    for(int i = 1; i<= target && i<= 6; i++)
    {
        combinations(processed+""+i, target-i);
    }
}

int main()
{
    // cout<<"absc"+2<<endl;

    combinations("", 4);


    return 0;
}
