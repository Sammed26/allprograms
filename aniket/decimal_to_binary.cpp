#include <iostream>
#include <vector>
using namespace std;

vector<int> decimal_to_binary(int n)
{
    vector<int> binary;

    if(n == 0)
    {
        binary.push_back(0);
        return binary;
    }

    while(n)
    {
        binary.push_back(n%2);
        n = n/2;
    }

    return binary;
}

void print_array(vector<int> &arr)
{
    cout<<"printing binary = ";
    for(int i = arr.size()-1; i>=0; i--)
    {
        cout<<arr[i];
    }
    cout<<endl;
}

int main()
{
    
    int n;
    cout<<"enter number to convert to binary"<<endl;
    cin>>n;

    vector<int> binary = decimal_to_binary(n);

    print_array(binary);

    return 0;
}