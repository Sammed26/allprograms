#include <iostream>
using namespace std;

bool ispalindrome(string str, int start, int end)
{
    if(start > end)
    {
        return 1;
    }

    if(str[start] != str[end])
    {
        return 0;
    }
    return ispalindrome(str, start+1, end-1);
}

int main()
{
    string str = "";
    cout<<"enter string"<<endl;
    cin>>str;

    cout<<"string = "<<str<<endl;

    if(ispalindrome(str, 0, str.length()-1))
    {
        cout<<"string is palindrome"<<endl;
    }
    else
    {
        cout<<"!! not palindrome"<<endl;
    }
    

    return 0;
}