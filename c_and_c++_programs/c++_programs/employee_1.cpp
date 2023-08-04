#include <iostream>
#include <cstring>
using namespace std;

struct birthdate
{
    int day;
    int month;
    int year;
};

int setname(string nem)
{
    int i = 0;
    while(nem[i] != '\0')
    {
        if(((nem[i]-48) >= 0) && ((nem[i]-48) <= 9))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

string getname(string name)
{
    return name;
}

int set_birthdate(int day, int month, int year, struct birthdate* bd)
{
    if((day<1) && (day>31) && (month<1) && (month>12) && (year>1926) && (year<2023))
    {
        cout<<"wrong birthdate"<<endl;
        return 0;
    }
    else
    {
        bd->day = day;
        bd->month = month;
        bd->year = year;
        return 1;
    }
}

void get_birthdate(struct birthdate bd)
{
    cout<<bd.day<<"/"<<bd.month<<"/"<<bd.year<<endl;
}

int main()
{
    string name;
    string temp;
    cout<<"enter name"<<endl;
    cin>>temp;
    int IsValid = setname(temp);
    if(IsValid == 1)
    {
        name = temp;
    }
    else
    {
        cout<<"incorrect name"<<endl;
    }

    if(IsValid == 1)
    {
        name = getname(name);
        cout<<name<<endl;
    }
    else
    {
        cout<<"enter correct name"<<endl;
    }

    int day, month, year;
    struct birthdate bd;
    cout<<"enter birthdate"<<endl;
    cin>>day>>month>>year;
    IsValid = set_birthdate(day, month, year, &bd);
    if(IsValid == 1)
    {
        get_birthdate(bd);
    }
    else
    {
        cout<<"wrong date of birth"<<endl;
    }


    return 0;
}