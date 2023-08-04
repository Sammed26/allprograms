#include <iostream>
using namespace std;

class student 
{
    protected:
        int roll_no;
    public:
        void set_roll_no(int r);
        void get_roll_no()
        {
            cout<<"roll number is "<<roll_no<<endl;
        }
};

void student :: set_roll_no(int r)
{
    roll_no  = r;
}

class marks : public student
{
    protected:
        float maths;
        float chemistry;
    public:
        void set_marks(float m, float c);
        void get_marks();
};

void marks :: set_marks(float m , float c)
{
    maths = m;
    chemistry = c;
}

void marks :: get_marks()
{
    cout<<"marks are "<<endl<<"maths = "<<maths<<endl<<"chemistry = "<<chemistry<<endl;
}

class result : public marks
{
    private:
        float percentage;
    public:
        void display_result();
};

void result :: display_result()
{
    percentage = (maths + chemistry)/2;
    cout<<"percentage is "<<percentage<<"%"<<endl;
}

int main()
{
    result r1;
    int roll;
    cout<<"enter roll number"<<endl;
    cin>>roll;
    r1.set_roll_no(roll);
    float mat, che;
    cout<<"enter maths and chemistry marks"<<endl;
    cin>>mat>>che;
    r1.set_marks(mat, che);
    r1.get_roll_no();
    r1.get_marks();
    r1.display_result();


    return 0;
}