#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"enter age"<<endl;
    cin>>age;

  /*  if((age>0) && (age <18))
    {
        cout<<"you can't vote, you are child"<<endl;
    }    
    else if ((age > 18) && (age < 60))
    {
        cout<<"you can vote"<<endl;
    }
    else    
    {
        cout<<"you are seniour citizen you can vote"<<endl;
    }  */

    switch(age)
    {
        case 18:
        {
            cout<<"hey child"<<endl;
            break;
        }
        case 23:
        {
            cout<<"you fool"<<endl;
            break;
        }
        case 8:
        {
            cout<<"nice to see you"<<endl;
            break;
        }
        case 45:
        {
            cout<<"you are mad"<<endl;
            break;
        }
        default:
        {
            cout<<"khula zalay kay neat baghun type kar ki"<<endl;
        }
    }
    
    

    return 0;
}