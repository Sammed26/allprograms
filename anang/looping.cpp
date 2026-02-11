#include <iostream>
using namespace std;

int main ()
{
   /* cout<<"anang"<< endl ; //1
    cout<<"anang"<< endl ; //2
    cout<<"anang"<< endl ; //
    cout<<"anang"<< endl ;
    cout<<"anang"<< endl ;
    cout<<"anang"<< endl ;
    cout<<"anang"<< endl ;
    cout<<"anang"<< endl ;
    cout<<"anang"<< endl ;
    cout<<"anang"<< endl ;*/    
    

    // int count = 10 ;
      
    // while (count > 10)
    // {
    //   cout<< "anang" <<endl;
    //   count = count - 1 ;
    // }

    // print numbers from 1 to 50
    /*
    int a1 =1 ;

    while (a1<51)
    {
        cout << a1 << endl;
        
        a1++;

    }
    */

    // print even numbers from 0 to 50
    /*
    int tanki1 = 0;

    while (tanki1 < 51)
    {
        cout << tanki1 << " ";
        tanki1 += 2 ;

    }
    */

    // print odd numbers from 0 to 50
    /*
    int int1 = 1;

    while (int1 < 51)
    {
        cout << int1 << " " ;
        int1 += 2 ;
    }
    */


    // take a number from user and tell whether it is even or odd
    /*
    int num1 ;
    int reminder ;
    int num3 = 1 ;
    
    while ( num3 < 11)
    {
        
    
    

    cout << "enter A  number"  << endl  ;
    cin >> num1  ;
    reminder = num1 % 2 ;
    if ( reminder == 0    )
    {
        cout << "your number is even" ;
    }
     else
     {
        cout<< "your number is odd" ;
     }

     num3 ++ ;
    }

    */



    /*
    for(initialization; condition; increment/decrement)
    {
        // common code
    }
    */

    /*
    int num = 1;
    while(num < 6)
    {
        cout<<num<<" ";
        num++;
    }*/

    /*
    for(int num = 1; num < 6; num++)
    {
        cout<<num<<" ";
    }
    */

    // print even numbers from 0 to 26 using while loop 

    /*for( int numw =  0 ;numw < 27 ; numw += 2)
     {
        cout  << numw << endl;
     }
        */


    // take a number input from user and tell whether it is prime or not
    int num ;
    int remainder ;
    int count =0;
    cout<< "enter  a number" << endl;
    cin >> num ;
    for (int curr_num = 2; curr_num <= num/2 ; curr_num++){
        remainder = num % curr_num ;
        if (remainder==0){ 
            
            count ++ ;
        }
    }
    if (count == 0){
        cout<<"your number is prime " ;
    }
    else {
        cout << "your number is composit";
    }
     
     
    
    
    return 0;
}