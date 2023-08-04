#include <iostream>

using namespace std;

inline int product(int a, int b) // inline used when very simple but maximum time repeating function calls are there
//by means of using inline functions in main, function call is filled with function sentences so returning time is minimized
{
    return a*b;
}

int area(float r, float pie = 3) // default argument, it takes default value when 
//not given in function call, if given takes that.
//default arguments are always written after all necessary arguments
{
    float a;
    a = pie*r*r;
    return a;
}

int main()
{
    cout<<"the product of 3 and 5 is "<<product(3,5)<<endl;
    cout<<"area without giving default argument value "<<area(1)<<endl;
    cout<<"area when default argument is given a value "<<area(1,4)<<endl;

    return 0;
}
