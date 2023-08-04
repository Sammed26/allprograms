#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

class account_services
{
    protected:

    public:
    int cheak_validity()
{
    string username, password;
    cout<<"enter username"<<endl;
    cin>>username;
    cout<<"enter password"<<endl;
    cin>>password;
    string create_user_pass_line = username + " " + password;
    string readed_data;
    int count = 0;
    ifstream read_data("password.txt");
        while (getline(read_data, readed_data))
        {
            //cout << readed_data <<endl;
            if(create_user_pass_line == readed_data)
            {
                count++;
            }
        }

        if(count == 0)
        {
            cout<<"incorrect username or password"<<endl;
            read_data.close();
            return 0;
        }
        else
        {
            cout<<"correct username and password"<<endl;
            read_data.close();
            return 1;
        }
        
        
}
    
        void display_balance()
        {
            
            if(cheak_validity())
            {
                string ac_no;
                cout<<"enter account number "<<endl;
                cin>>ac_no;
                string file_name = ac_no + ".txt";
                ifstream read(file_name);
                string balanc = "balance = ", readed_data;
                while (getline(read, readed_data))
                {
                    
                    if(balanc == readed_data)
                    {
                        cout << readed_data <<endl;
                    }
                }


                read.close();
            }
        }

        int deposit_money();


};

int account_services :: deposit_money()
{
    long int accountno;
    cout<<"enter account number"<<endl;
    cin>>accountno;

    string balance_line = "your balance is ";
    string readeddata;
    string accountdetail_file = accountno + ".txt";
    ifstream read(accountdetail_file);
    while(getline(read, readeddata))
    {
        
        if(readeddata == )
    }
    
}


int main()
{
    //  string str = "amol", password = "14";
    //  cheak_validity(str, password);
    account_services a1;
    a1.display_balance();



    return 0;
}