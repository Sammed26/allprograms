/* Write a program to find numeric weight of given lowercase string. 
Assume lower case letters has been assigned values for  1 to 26 for alphabets ‘a’ to ‘z’.
for example weight of string “apple” is 1+16+16+12+5 = 50 */

#include <iostream>
using namespace std;

int numericweight_of_lowercase(string s)
{
    int i = 0, sum = 0;
    while(s[i] != '\0')
    {
        sum = sum + (s[i] - 96);   // 96 is subtracted because 97 is ASCII value of 'a'
        i++;
    }
    return sum;
}

int main()
{
    int numeric_weight;
    string str;
    cout<<"enter lowercase string to find numeric weight"<<endl;
    cin>>str;
    numeric_weight = numericweight_of_lowercase(str);
    cout<<"numeric weight of given lowercase string is "<<numeric_weight<<endl;

    return 0;
}