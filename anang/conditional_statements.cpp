#include <iostream>
using namespace std ;

    int main()
    {
        /*
        //the code for addition
        long num1 ;
        long num2 ;
        cout<< "give 2 numbers for addition"<< endl;
        cin>> num1 >> num2;
        cout << "the addition of the 2 numbers is";
        cout<<num1+num2<< endl ;
        
        // the code for substraction
        // long num3 ;
        // long num4;
        cout << "give 2 numbers for subtraction " << endl;
        cin >> num1 ;
        cin>> num2 ;
    
        cout << "the subtraction of the 2 numbers is" ;
        cout << num1-num2 << endl ;
        
        // the code for multiplicaction
        // long num5 ;
        // long num6 ;
        cout << "give 2 numbers for multiplicaction" << endl;
        cin >> num1;
        cin>> num2;
        cout << "the multiplicaction of the 2 numbers is" ;
        cout << num2 * num1 << endl ;
        
        //the code for division 
        long num7;
        long num8 ;
        cout << "give 2 numbers for division" << endl;
        cin >> num7;
        cin>> num8;
        cout << "the division of the 2 numbers is" ;
        cout << num7 / num8 << endl ;
        
        */



        // take a number from user and tell whether it is negative or positive
         int num ;
         cout << " write a number" << endl ;
         cin>> num ;
         if ( num > 0)
         {
            cout << num  << " is positive";
         }
         else if(num == 0)
         {
            cout << num << " is zero";

         }
        else
         {
            cout << num << " is negative";
         }



        return 0;
    }