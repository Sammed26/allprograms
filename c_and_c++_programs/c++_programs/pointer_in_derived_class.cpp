#include <iostream>
using namespace std;

class base
{
    public:
        int base_var;
        void display_base_var()
        {
            cout<<"base var is "<<base_var<<endl;
        }
};

class derived : public base
{
    public:
        int derived_var;
        void display_derived_var()
        {
            cout<<"derived var is "<<derived_var<<endl;
        }
};

int main()
{
    base* base_pointer;
    base base_object;
    derived derived_object;
    base_pointer = &derived_object;  // we can point base class pointer to derived 
                                     // class object, but we can only access base class 
                                     // members

    base_pointer->base_var = 26;
    base_pointer->display_base_var();
    /* base_pointer->display_derived_var();  
    base_pointer->derived_var = 345; */

    // above commented things show an error
    
    return 0;
}