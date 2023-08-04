#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student
{
  int age, standard;
  string first_name, last_name;
  public:
    void set_age(int a)
    {
        age = a;
    }  
    void get_age()
    {
        cout<<age;
    }
    void set_standard(int s)
    {
        standard = s;
    }
    void get_standard()
    {
        cout<<standard;
    }
    void set_first_name(string fn)
    {
        first_name = fn;
    }
    void get_first_name()
    {
        cout<<first_name;
    }
    void set_last_name(string ln)
    {
        last_name = ln;
    }
    void get_last_name()
    {
        cout<<last_name;
    }
    void to_string()
    {
        cout<<age<<","<<first_name<<","<<last_name<<"."<<standard;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
