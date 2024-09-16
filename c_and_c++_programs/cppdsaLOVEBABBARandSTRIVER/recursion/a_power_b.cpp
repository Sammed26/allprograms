#include <iostream>
using namespace std;

int a_to_power_b(int base, int power)
{
    if(base == 0)
    {
        return 0;
    }
    if(power == 0)
    {
        return 1;
    }

    if(power%2 == 0)
    {
        return a_to_power_b(base, power/2) * a_to_power_b(base, power/2);
    }
    else
    {
        return base * a_to_power_b(base, power/2) * a_to_power_b(base, power/2);
    }
}

int main()
{
    int base, power;
    cout<<"enter value of base and power"<<endl;
    cin>>base>>power;

    int ans = a_to_power_b(base, power);

    cout<<base<<"^"<<power<<" = "<<ans<<endl;

    return 0;
}