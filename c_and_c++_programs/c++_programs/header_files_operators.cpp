#include <iostream>
using namespace std;

int main()
{
    int num1 = 2; //  '=' is an assignment operator
    int num2 = 4; //  '=' is an assignment operator

    cout<<"arithematic opertors"<<endl<<endl;

    cout<<"the addition of num1 and num2 is  "<<(num1+num2)<<endl;
    cout<<"the subtraction of num1 and num2 is  "<<(num1-num2)<<endl;
    cout<<"the multiplication of num1 and num2 is  "<<(num1*num2)<<endl;
    cout<<"the division of num1 and num2 is  "<<(num1/num2)<<endl;
    cout<<"the pre increment of num1 is  "<<(++num1)<<endl;
    cout<<"the pre decrement of num1 is  "<<(--num1)<<endl;
    cout<<"the post increment of num1 is  "<<(num1++)<<endl;
    cout<<"the post decrement of num1 is  "<<(num1--)<<endl;
    cout<<"the value of num1 is "<<num1<<endl;
    
    cout<<"comparision opertors"<<endl<<endl;

    cout<<"the (num1 == num2) is "<<(num1==num2)<<endl;
    cout<<"the (num1 != num2) is "<<(num1!=num2)<<endl;
    cout<<"the (num1 >= num2) is "<<(num1>=num2)<<endl;
    cout<<"the (num1 <= num2) is "<<(num1<=num2)<<endl;
    cout<<"the (num1 > num2) is "<<(num1>num2)<<endl;
    cout<<"the (num1 < num2) is "<<(num1<num2)<<endl;

    cout<<"logical operator"<<endl<<endl;

    cout <<"logical 'and' operator ((num1 > num2) && (num1 == num2)) is "<<((num1 > num2) && (num1 == num2))<<endl;
    cout <<"logical 'or' operator ((num1 > num2) || (num1 == num2)) is "<<((num1 < num2) || (num1 == num2))<<endl;
    


    return 0;
}