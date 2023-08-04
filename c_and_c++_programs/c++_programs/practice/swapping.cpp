#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int n1,n2;
    cout<<"enter two numbers"<<endl;
    cin>>n1>>n2;

    cout<<n1<<" "<<n2<<endl;
    swap(&n1, &n2);
    cout<<n1<<" "<<n2<<endl;

    return 0;
}