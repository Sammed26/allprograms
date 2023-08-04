#include <iostream>
#include <cstdlib>
using namespace std;

class person
{
    string name;
    int age;
    public:
        person()
        {
            name = "invalid";
            age = 0;
        }
        friend ostream &operator << (ostream &out, person &p);
        friend istream &operator >> (istream &in, person &p);
};

ostream &operator << (ostream &out, person &p)
{
    out<< "name is "<<p.name<<" and age is "<<p.age<<endl;
    return out;
}

istream &operator >> (istream &in, person &p)
{
    cout << "extraction operator overloaded"<<endl;
    cin>>p.name>>p.age;
    return in;
}

int main()
{
    cout<<"enter name and age"<<endl;
    person p;
    cin>>p;
    cout<<p;

    return 0;
}