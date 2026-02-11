#include <iostream>
using namespace std ;


    int main ()

    {

        int num1;
        int num2;

        cout << "enter a number" << endl ;
        cin >> num1;
            for ( int num3 = 1; num3 <= num1 ; num3++)
            {
                num2 = num1 % num3 ;

                 if (num2 == 0)

                 {
                
                    cout << num3 ;
                    cout << "is the factor of "<<num1 << endl ;
                 }


            }


            return 0 ;


 }





