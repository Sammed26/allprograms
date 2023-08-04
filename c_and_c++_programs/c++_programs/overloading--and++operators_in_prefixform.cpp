#include <iostream>
using namespace std;

class marks
{
    int mark;
    public:
        marks()
        {
            mark = 0;
        }
        marks(int x)
        {
            mark = x;
        }
        void display()
        {
            cout<<"your marks are "<<mark<<endl;
        }
        void operator--()
        {
            mark -= 1;
        }
        friend void operator++(marks &x);
};

void operator++(marks &x)
{
    x.mark += 1;
}

int main()
{
    marks first_obj(26);
    first_obj.display();

    --first_obj;
    first_obj.display();

    ++first_obj;
    first_obj.display();
    
    return 0;
}