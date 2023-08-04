// date = 01/02/2023
// day = wednesday


#include <iostream>
#include <string>

using namespace std;

class binary
{
    private:
    string s;
    void ones_complement();

    public:
    void get_binary();
    void cheak_binary();
    void display();

};

void binary :: get_binary()
{
    cout<<"enter binary number"<<endl;
    cin>>s;
}

void binary :: cheak_binary()
{
    int not_matched = 0;

    for(int i = 0; i < s.length(); i++)
    {
        if((s.at(i) != '0') && (s.at(i) != '1'))
        {
            cout<<"invalid binary number"<<endl;
            not_matched++;
            exit(0);
        }
    }
    if(not_matched == 0)
    {
        cout<<"you entered"<<endl;
        display();
        ones_complement();
        cout<<"after ones complement"<<endl;

    }
    else
    {
        cout<<"not an binary number so ones complement not possible"<<endl;
    }
}

void binary :: ones_complement()
{
    for(int i = 0; i<s.length(); i++)
    {
        if(s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    cout<<endl;
}

void binary :: display()
{
    
    for(int j = 0; j<s.length(); j++)
    {
        cout<<s.at(j);
    }
}

int main()
{
    binary n;
    n.get_binary();
    n.cheak_binary();
    //n.display();  // nesting is done.
    //n.ones_complement(); //gives error because declared in private.
    n.display();



    return 0;
}