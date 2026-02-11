class Account{

    float balance;
    int ac_no;

    public Account(){
        balance = 0;
    }
    public Account(int ano){
        balance = 10; 
        ac_no = ano;
    }

    void display_ac_details(){
        System.out.println("balance = " + balance + " of account number = " + ac_no);
    }

}

public class Constructors{

    public static void main(String[] args)
    {
        Account ac1 = new Account();
        ac1.display_ac_details();

        Account ac2 = new Account(111);
        ac2.display_ac_details();
    }

}