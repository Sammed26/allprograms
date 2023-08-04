#include <iostream>
using namespace std;

class arithematic
{
    int a, b;
    public:
        void setNumbers(int i, int j)
        {
            a = i;
            b = j;
        }
        void add()
        {
            cout<<"addition is "<<(a+b)<<endl;
        }
        void getNumbers()
        {
            cout<<"a is "<<a<<endl<<"b is "<<b<<endl;
        }
};

int main()
{
    arithematic* ptr = new arithematic[3];

    arithematic* ptemp = ptr;
    int x, y;
    for(int i = 0; i<3; i++)
    {
        cout<<"enter two numbers"<<endl;
        cin>>x>>y;
        ptr->setNumbers(x, y);
        ptr++;
    }

    for(int i = 0; i<3; i++)
    {
        cout<<"for "<<i+1<<" th numbers, addition is ";
        // ptemp->add();  //  use dot or arrow operator,
        (*ptemp).add();   //  both are allowed
        ptemp->getNumbers();
        ptemp++;
    }

    return 0;
}