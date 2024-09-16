#include <iostream>
#include <vector>
using namespace std;

string words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void to_word(int n)
{
    if(n == 0)
    {
        // cout<<words[0]<<" ";
        return ;
    }

    int digit = n%10;
    
    to_word(n/10);

    cout<<words[digit]<<" ";
}

int main()
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n;

    to_word(n);

    return 0;
}