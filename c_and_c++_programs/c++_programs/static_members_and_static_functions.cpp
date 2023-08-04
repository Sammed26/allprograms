// date = 02/02/2023
// day = thursday

#include <iostream>
using namespace std;

class student
{
    static int roll_no; // static variable declaration
    string name[10];

    public:
    void set_data()
    {
        cout<<"enter name of student at roll number "<<roll_no<<endl;
        cin>>name[roll_no];
        roll_no++;
    }
    
    void get_data()
    {
        for(int i = 0; i<roll_no; i++)
        {
            cout<<"as per roll number names of students are "<<name[i]<<endl;
        }
    }

    static void display_roll_no() // static function 
    {
        cout<<"roll number is "<<roll_no<<endl;
    }

};

int student :: roll_no; // static variable need to declare outside class also as it is part of class
                        // by default 0 initialized, if i want to change 
                        // i can give that value here as ' int student :: roll_no = 125'

int main()
{
    student first;

    int student_no;
    cout<<"enter number of students"<<endl;
    cin>>student_no;

    for(int i = 0; i<student_no; i++)
    {
        first.set_data();
        student :: display_roll_no(); // static function calling
    }

    first.get_data();


    return 0;
}