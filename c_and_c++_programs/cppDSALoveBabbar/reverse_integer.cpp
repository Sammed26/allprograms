#include <iostream>
using namespace std;

int reverse_int(int num)
{
    int reversed_num = 0;
    while(num != 0)
    {
        reversed_num = reversed_num*10 + (num%10);
        num = num/10;
    }
    return reversed_num;
}

int main()
{
    int num;
    cout<<"enter integer"<<endl;
    cin>> num;

    int reversed_num = reverse_int(num);

    cout<<"reversed number of "<<num<<" is "<<reversed_num<<endl;

    return 0;
}