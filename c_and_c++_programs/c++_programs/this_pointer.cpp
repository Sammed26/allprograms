#include <iostream>
using namespace std;

class simple
{
    int a;
    public:
        simple & set_data(int a)  // this is a pointer which is also used to return 
                                  // current object
        {
            this->a = a;  // if same name then after using 'this' pointer this->a means
                          // that objects 'a'
            return *this;
        }
        void get_data()
        {
            cout<<"value of a is "<<a<<endl;
        }
};

int main()
{
    simple s1;
    s1.set_data(26).get_data();  
    /*  in above example 's1' calls 'set_data(26)' and 'set_data(26)' returns a pointer 
        that pointing to current object i.e. 's1' and hence 's1.set_data(26)' returns 
        object then for that object again 'get_data()' runs    
    */
    //s1.get_data();


    return 0;
}