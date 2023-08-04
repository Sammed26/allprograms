/*Create a class Rectangle with private attributes length and width and public methods to set the values of t
he attributes, get the values of the attributes, calculate the area and perimeter of the rectangle, and print t
he rectangle.*/

#include <iostream>
using namespace std;

class rectangle
{
    float length;
    float breadth;
    public:
        friend void area_perimeter(rectangle r);
        void set_data(float l, float b)
        {
            length = l;
            breadth = b;
        }
        float get_length()
        {
            return length;
        }
        float get_breadth()
        {
            return breadth;
        } 
        void display_data()
        {
            cout<<"length = "<<length<<" breadth = "<<breadth<<endl;
        }
};

void area_perimeter(rectangle r)
{
    cout<<"area = "<<(r.get_breadth() * r.get_length())<<endl
        <<"perimeter = "<<(2* (r.get_breadth() + r.get_length()))<<endl;
}

int main()
{
    rectangle r1;
    r1.set_data(12, 15);
    r1.display_data();
    area_perimeter(r1);

    return 0;
}