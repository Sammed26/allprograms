/*Create a class Shape with pure virtual methods to calculate the area and perimeter
of the shape, and a
derived class Circle with private attributes radius and public methods to set the 
value of the attribute, get the
value of the attribute, calculate the area and perimeter of the circle, 
and print the circle.*/

#include <iostream>
using namespace std;

class shape
{
    public:
        virtual float area() = 0;
        virtual float perimeter() = 0;
};

class circle : public shape
{
    float radius;
    public:
        void set_radius(float r)
        {
            radius = r;
        }
        float get_radius()
        {
            return radius;
        }
        float area()
        {
            return ((22/7) * get_radius() * get_radius());
        }
        float perimeter()
        {
            return (2 * (22/7) * get_radius());
        }
        void display()
        {
            cout<<"area is "<<area()<<" & "<<"perimeter is "<<perimeter()<<endl;
        }
};



int main()
{
    circle c1;
    c1.set_radius(4);
    c1.display();

    return 0;
}