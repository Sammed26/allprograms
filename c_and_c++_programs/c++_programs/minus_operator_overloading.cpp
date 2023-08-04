#include <iostream>
using namespace std;

class marks
{
    int physics, chemistry;
    public:
        marks()
        {
            physics = 0;
            chemistry = 0;
        }
        marks(int p, int c)
        {
            physics = p;
            chemistry = c;
        }
        void set_chemistry(int mar)
        {
            chemistry = mar;
        }
        void set_physics(int phy)
        {
            physics = phy;
        }
        int get_chemistry()
        {
            return chemistry;
        }
        int get_physics()
        {
            return physics;
        }
        void display()
        {
            cout<<"physics = "<<physics<<endl<<"chemistry = "<<chemistry<<endl;
        }
        // marks operator-(marks m)    // --> if operator function is written in class itself then
        //                             // only required to pass single parameter because it 
        //                             // takes current class as a parameter
        //                             // if m1 = m2 - m3;
        //                             // then m2 is assumed as current class and m2 calls the 
        //                             // operator function
                
        //                             // --> if declared outside the class then need to pass
        //                             // all the required parameters
        // {
        //     marks x;
        //     x.chemistry = chemistry - m.chemistry;
        //     x.physics = physics - m.physics;
        //     return x;
        // } 
};

marks operator-(marks m, marks x)  // --> if declared outside the class then need to pass
                                   // all the required parameters
{
    marks temp;
    int tempchem, tempphy;
    tempchem = m.get_chemistry() - x.get_chemistry();
    tempphy = m.get_physics() - x.get_physics();
    temp.set_chemistry(tempchem);
    temp.set_physics(tempphy);
    return temp;
}

int main()
{
    marks m, m1, m2;
    m = m1 - m2;
    m.display();

    marks m3(50, 36), m4(78, 96);
    m = m3 - m4;
    m.display();


    return 0;
}