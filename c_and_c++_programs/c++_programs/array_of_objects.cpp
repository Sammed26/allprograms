// date = 03/02/2023
// day = friday


#include <iostream>
using namespace std;

class student
{
    int roll_no;
    string name;

    public:
    void setall()
    {
        cout<<"enter roll no"<<endl;
        cin>>roll_no;
        cout<<"enter name"<<endl;
        cin>>name;
    }
    void display()
    {
        cout<<roll_no<<" = "<<name<<endl;

    }
};

int main()
{
    student first[5];

    for(int i = 0; i<5; i++)
    {
        first[i].setall();
        first[i].display();
    }

    return 0;
}