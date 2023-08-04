#include <iostream>
using namespace std;

template <class T1 = int, class T2 = int>  // here i defined default types 
class sum
{
    T1 a;
    T2 b;
    public:
        void set_data(T1 x, T2 y)
        {
            a = x;
            b = y;
        }
        void sum_and_display()
        {
            cout<<"the sum is "<<(a+b)<<endl;
            cout<<endl;
        }
};

int main()
{
    sum <> obj1;           // here i didn't specifying for which type i running this 
                           // it takes default type which is defined above while creating template
    obj1.set_data(26, 27);
    obj1.sum_and_display();

    sum<int, float>obj2;       // here i mentioned types so it takes that
    obj2.set_data(26, 26.26);
    obj2.sum_and_display(); 


    return 0;
}