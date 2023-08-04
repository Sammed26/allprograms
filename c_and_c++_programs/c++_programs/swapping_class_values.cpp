#include <iostream>
using namespace std;

class second;

class first
{
    int val1;

    friend void swap(first & , second &);
    friend void print_data(first, second);

    public:
        void set_data(int a)
        {
            val1 = a;
        }
};

class second
{
    int val2;

    friend void swap(first & , second &);
    friend void print_data(first, second);

    public:
        void set_data(int b)
        {
            val2 = b;
        }
};

void swap(first &o1, second &o2)
{
    int temp;
    temp = o1.val1;
    o1.val1 = o2.val2;
    o2.val2 = temp;
}

void print_data(first o1, second o2)
{
    cout<<"first class data is "<<o1.val1<<endl;
    cout<<"second class data is "<<o2.val2<<endl;
}

int main()
{
    first f1;
    f1.set_data(8);

    second s1;
    s1.set_data(26);

    cout<<"before swapping"<<endl;
    print_data(f1, s1);

    swap(f1, s1);

    cout<<"after swapping"<<endl;
    print_data(f1, s1);

    return 0;
}