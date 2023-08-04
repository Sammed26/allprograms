#include <iostream>
using namespace std;

struct car_details
{
    char name;
    int horsepower;
    float price;
};

union car
{
    char n;
    int power;
    float pri;
};

int main()
{   
    car_details c[5];

    c[0].name = 'f';
    c[0].horsepower = 170;
    c[0].price = 4000000;

    c[1].name = 't';
    c[1].horsepower = 204;
    c[1].price = 4800000;

    c[2].name = 'a';
    c[2].horsepower = 160;
    c[2].price = 3500000;

    c[3].name = 'g';
    c[3].horsepower = 200;
    c[3].price = 4500000;

    c[4].name = 'm';
    c[4].horsepower = 170;
    c[4].price = 3800000;

    int num;
    cout<<"enter what you want "<<endl;
    cin>>num;
    enum input{endeavour, fortuner, alturas, gloster, merridian};
    cout<<"enter as 'endeavour, fortuner, alturas, gloster, meridian"<<endl;

    
    {
        cout<<"name is "<<c[num].name<<endl;
        cout<<"name is "<<c[num].horsepower<<endl;
        cout<<"name is "<<c[num].price<<endl;
    
    }while(0);
    
    return 0;
}