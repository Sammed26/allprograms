#include <iostream>
using namespace std ; 

    int main () 
    {
        long n1 ;
        int n2 ;

        cout << "put any number" << endl ;
        cin >> n1 ;
        n2 = n1 % 2;

            if (n2 == 0) 
            {
                cout << " your number is even " ;
            }

            else 
            {
                cout << " your number is odd " ;
            }
                return 0 ;
    }