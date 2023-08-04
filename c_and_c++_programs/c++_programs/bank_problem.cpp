/*Create a class BankAccount with private attributes accountNumber, balance, and accountType, and publi
c methods to deposit and withdraw money from the account, get the balance of the account, and display t
he account information.*/

#include <iostream>
using namespace std;

class bankaccount
{
    unsigned int account_no;
    double balance;
    string accout_type;
    public:
        void set_data(unsigned int acno, double bal, string ac_type)
        {
            account_no = acno;
            balance = bal;
            accout_type = ac_type;
        }
        int deposit(double amt)
        {
            balance = balance + amt;
            return 0;
        }
        int withdrawal(double amt, unsigned int ac_no)
        {
            if(account_no == ac_no)
            {
                cout<<"amount withdrawed "<<amt<<endl;
                balance = balance - amt;
                display_balance();
                return 0;
            }
            else
            {
                cout<<"incorrect account number"<<endl;
                return 1;
            }
        }
        void display_balance()
        {
            cout<<"balance is "<<balance<<endl;
        }
};

int main()
{
    bankaccount b1;
    b1.set_data(95759575, 123654.256, "saving");
    b1.display_balance();
    b1.deposit(56000);
    b1.display_balance();
    b1.withdrawal(120000, 95759575);
    b1.display_balance();

    return 0;
}