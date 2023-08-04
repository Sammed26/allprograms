#include <iostream>
#include <math.h>
using namespace std;

class simple_calculator
{
    protected:
        float a;
        float b;
        float sum_r;
        float sub_r;
        float multiply_r;
        float divide_r;

    public:
        void set_data(float x, float y)
        {
            a = x;
            b = y;
        }
        void sum();
        void subtract();
        void multiply();
        void divide();
        /*void display()
        {
            cout<<"sum = "<<sum_r<<endl<<"subtraction is "<<sub_r<<endl;
            cout<<"multiplication is "<<multiply_r<<endl;
            cout<<"division is "<<divide_r<<endl;
        }*/
};

void simple_calculator :: sum()
{
    sum_r = a + b;
    cout<<"sum is "<<sum_r<<endl;
}
void simple_calculator :: subtract()
{
    sub_r = a - b;
    cout<<"subtraction is "<<sub_r<<endl;
}
void simple_calculator :: multiply()
{
    multiply_r = a * b;
    cout<<"multiplication is "<<multiply_r<<endl;
}
void simple_calculator :: divide()
{
    divide_r = a / b;
    cout<<"division is "<<divide_r<<endl;
}

class scientific_calculator : public simple_calculator
{
    protected:
        float percentage;
        float square;
        float square_root;
        float angle_from_sine;
    public:
        void cal_percentage(float x, float y)
        {
            percentage = ((x + y)/200)*100;
            cout<<"percentage is "<<percentage<<endl;
        }
        void cal_square(float x)
        {
            square = x * x;
            cout<<"square is "<<square<<endl;
        }
        void cal_square_root(float x)
        {
            square_root = sqrt(x);
            cout<<"square root is "<<square_root<<endl;
        }
        void cal_angle_from_sine(float x)
        {
            angle_from_sine = sin(x);
            cout<<"angle is "<<angle_from_sine<<"deg."<<endl;
        }
        /*void display()
        {
            cout<<"percentage = "<<percentage<<endl<<"square = "<<square<<endl;
            cout<<"square root = "<<square_root<<endl;
            cout<<"angle = "<<angle_from_sine<<endl;
        }*/
};

int main()
{
    scientific_calculator s1;
    float a, b;
    int choice;
    
    while(1)
    {
        cout<<"enter choice of operation you want to perform"<<endl;
        cout<<"sum = 1"<<endl<<"subtraction = 2"<<endl<<"multiplication = 3"<<endl<<"division = 4"<<endl;
        cout<<"percentage = 5"<<endl<<"square = 6"<<endl<<"square root = 7"<<endl<<"angle = 8"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"enter two numbers "<<endl;
                cin>>a>>b;
                s1.set_data(a, b);
                s1.sum();
                break;

            case 2:
                cout<<"enter two numbers "<<endl;
                cin>>a>>b;
                s1.set_data(a, b);
                s1.subtract();
                break;

            case 3:
                cout<<"enter two numbers "<<endl;
                cin>>a>>b;
                s1.set_data(a, b);
                s1.multiply();
                break;

            case 4:
                cout<<"enter two numbers "<<endl;
                cin>>a>>b;
                s1.set_data(a, b);
                s1.divide();
                break;

            case 5:
                cout<<"enter two numbers "<<endl;
                cin>>a>>b;
                s1.cal_percentage(a, b);
                break;

            case 6:
                cout<<"enter number "<<endl;
                cin>>a;
                s1.cal_square(a);
                break;

            case 7:
                cout<<"enter number"<<endl;
                cin>>a;
                s1.cal_square_root(a);
                break;

            case 8:
                cout<<"enter number "<<endl;
                cin>>a;
                s1.cal_angle_from_sine(a);
                break;

            case 9:
                cout<<"exiting-------"<<endl;
                break;

            default:
                cout<<"enter appropriate input"<<endl;
        }
    }
    
    

    return 0;
}