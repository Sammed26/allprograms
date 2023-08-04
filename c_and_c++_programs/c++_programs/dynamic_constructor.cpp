/* dynamic initialiazation of constructor means at run time according to 
input compiler dicides which constructor should run */

#include <iostream>
using namespace std;

class bank
{
     int principal;
     int period_in_years;
     float interest;
     float returnvalue;

     public:
       // bank(){}
                 /* this default constructor is needed because when we create object
                    it tries to run some constructor till we give any specific type 
                    constructor as an input.
                   
                    If you not want to create default constructor then you need to 
                    give values(parameters) while creating an object itself,
                    as shown in below line number 78 and 86.
                 */       

        bank(int p, int period, int rate);
        bank(int p, int period, float Rate);

        void show();
};

bank :: bank(int p, int period, int rate)
{
    principal = p;
    period_in_years = period;
    interest = float(rate)/100;
    returnvalue = principal;

    for(int i =0; i<period_in_years; i++)
    {
        returnvalue = returnvalue * (1 + interest);
    }
}

bank :: bank(int  p, int period, float Rate)
{
    principal = p;
    period_in_years = period;
    interest = Rate;
    returnvalue = principal;

    for(int i = 0; i<period_in_years; i++)
    {
        returnvalue = returnvalue * (1 + interest);
    }
}

void bank :: show()
{
    cout<<"principal amount = "<<principal<<endl;
    cout<<"period of investment = "<<period_in_years<<" years"<<endl;
    cout<<"return value = "<<returnvalue<<endl;
}

int main()
{
    //bank b1;

    int p, period, rate;
    float Rate;
    int choice = 0;
    cout<<"enter choice based on rate of interest"<<endl<<"percentage = 0"<<endl<<"fraction = 1"<<endl;
    cin>>choice;

    if(choice == 0)
    {
        cout<<"enter principal amount, period (in years) and rate of interest(in percentage)"<<endl;
        cin>>p>>period>>rate;
        //b1 = bank(p, period, rate);
        bank b1(p, period, rate); // this type of declaration if you don't want to create
                                  // default constructor
        b1.show();
    }
    else
    {
        cout<<"enter principal amount, period (in years) and rate of interest(in fraction)"<<endl;
        cin>>p>>period>>Rate;
        //b1 = bank(p, period, Rate);
        bank b1(p, period, Rate); // this type of declaration if you don't want to create
                                  // default constructor
        b1.show();
    }
    
    

    return 0;
}