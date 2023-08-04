#include <iostream>
using namespace std;

double areacircle(float r)
{
    return (r * r * (22/7.0));
}

int main()
{
    float radius;
    cout<<"enter radius"<<endl;
    cin>>radius;
    double area;
    area = areacircle(radius);
    cout<<"area is "<<area<<endl;

    return 0;
}