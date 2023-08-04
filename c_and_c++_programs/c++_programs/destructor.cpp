#include <iostream>
using namespace std;

class simple
{
    public:
    simple()
    {
        cout<<"constructor called"<<endl;
    }
    ~simple()
    {
        cout<<"distructor called"<<endl;
    }
};

int main()
{
    cout<<"into main"<<endl;
    cout<<"objects s1 and s2 created"<<endl;
    simple s1,s2;
    {
        cout<<"we just entered parenthesis"<<endl;
        cout<<"created another object s3, s3 scope is only for parenthesis we entered above"<<endl;
        simple s3;
        cout<<"we exiting from parenthesis"<<endl;
    }
    cout<<"back to main and out of parenthesis"<<endl;


    return 0;
}