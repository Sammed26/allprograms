#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string moviename;
    cout<<"enter movie name"<<endl;
    getline(cin, moviename);
    
    int ticketssold = 2626;
    // cout<<"enter total number of tickets sold"<<endl;
    // cin>>ticketssold;

    float grossamt = 9150.00;
    float percent_of_gross_amt_donated = 10;
    float amt_donated = 915.25;
    float netsale = grossamt - amt_donated;

    cout<<setw(52)<<left<<setfill('-')<<"Movie Name: "<<" "<<moviename<<endl;
    cout<<setw(52)<<left<<setfill('-')<<"Number of Tickets sold: "<<" "<<setw(10)<<setfill(' ')<<right<<ticketssold<<endl;
    cout<<setw(52)<<left<<setfill('-')<<"Gross Amount: "<<" "<<setw(10)<<setfill(' ')<<right<<grossamt<<endl;
    cout<<setw(52)<<left<<setfill('-')<<"Percentage of gross amount donated: "<<" "<<setw(10)<<setfill(' ')<<right<<percent_of_gross_amt_donated<<endl;
    cout<<setw(52)<<left<<setfill('-')<<"Amount Donated: "<<" "<<setw(10)<<setfill(' ')<<right<<amt_donated<<endl;
    cout<<setw(52)<<left<<setfill('-')<<"Net sale: "<<" "<<setw(10)<<setfill(' ')<<right<<netsale<<endl;



    return 0;
}