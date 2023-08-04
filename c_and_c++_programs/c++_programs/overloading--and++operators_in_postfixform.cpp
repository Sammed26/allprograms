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
            cout<<" your marks are "<<mark<<endl;
        }
        marks operator--(int)
        {
            marks temp(*this);
            mark = mark - 1;
            return temp;
        }
        friend marks operator++(marks &temp, int);
};

marks operator++(marks &temp, int)
{
    marks duplicate(temp.mark);
    temp.mark += 1;
    return duplicate;
}

int main()
{
    marks m1(26);
    m1.display();

    (m1--).display();  // 'm1--' returns an object and that object is directly accessed by 
                       // dot operator
                       // here 'm1--' returns 'duplicate' object which contains original 
                       // value of m1
    m1.display();

    (m1++).display();
    m1.display();
    // m1.operator--(1);
    // m1.display();

    return 0;
}