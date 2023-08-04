#include <iostream>
#include <cstring>
using namespace std;

struct birthdate 
{
    int day;
    int month;
    int year;
};

class employee
{
    string name;
    struct birthdate bd;
    string address;
    int age;
    //friend  int isvalid(string);

    public:
        int isvalid(string temp)
        {
            int i = 0;
            while(temp[i] != '\0')
            {
                if(((temp[i] <= 65) && (temp[i] >= 90)) || ((temp[i] <= 97) && (temp[i] >= 122)) || (temp[i] != 32))
                {
                    return 0;
                }
                i++;
            }
            return 1;
        }
        void set_name(string temp)
        {
            int valid = isvalid(temp);
            if(valid == 1)
            {
                name = temp;
            }
            else
            {
                cout<<"name is incorrect"<<endl;
            }
        }
        string get_name()
        {
            cout<<"name is "<<name<<endl;
            return name;
        }
        int set_birthdate(int day, int month, int year)
        {
            if((day<1) && (day>31) && (month<1) && (month>12) && (year>1926) && (year<2023))
            {
                cout<<"wrong birthdate"<<endl;
                return 0;
            }
            else
            {
                bd.day = day;
                bd.month = month;
                bd.year = year;
                return 1;
            }
        }
        void get_birthdate()
        {
            cout<<bd.day<<"/"<<bd.month<<"/"<<bd.year<<endl;
        }
};



int main()
{
    employee e1;
    string temp;
    cout<<"enter name"<<endl;
    cin>>temp;
    e1.set_name(temp);
    e1.get_name();

    int day, month, year;
    cout<<"enter birthdate"<<endl;
    cin>>day>>month>>year;
    e1.set_birthdate(day, month, year);
    e1.get_birthdate();

    return 0;
}