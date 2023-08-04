#include <iostream>
using namespace std;

class student
{
    protected:
        int roll_no;
    public:
        void set_roll_no(int a)
        {
            roll_no = a;
        }
        void display_roll_no()
        {
            cout<<"roll number is "<<roll_no<<endl;
        }
};

class test : virtual public student
{
    protected:
        float physics, maths;
    public:
        void set_marks(float p, float m)
        {
            physics = p;
            maths = m;
        }
        void display_marks()
        {
            cout<<"physics = "<<physics<<endl;
            cout<<"maths = "<<maths<<endl;
        }
};

class sports : public virtual student
{
    protected:
        float pt_marks;
    public:
        void set_pt_marks(float x)
        {
            pt_marks = x;
        }
        void display_pt_marks()
        {
            cout<<"pt marks = "<<pt_marks<<endl;
        }
};

/* if not derived in virtual mode then same data gets twice in derived class in result
   and this is unnecessary, also wastage. compiler shows error if we do this
*/

class result : public test, public sports
{
    private:
        float total_score;
    public:
        void total()
        {
            total_score = physics + maths + pt_marks;
        }        
        
        void display_total()
        {
            cout<<"total score = "<<total_score<<endl;
        }
};

int main()
{
    result sam;
    sam.set_roll_no(26);
    sam.set_marks(26.5, 78.568);
    sam.set_pt_marks(100);
    sam.total();
    sam.display_roll_no();
    sam.display_marks();
    sam.display_pt_marks();
    sam.display_total();


    return 0;
}