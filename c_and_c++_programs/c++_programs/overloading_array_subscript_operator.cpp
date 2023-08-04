#include <iostream>
using namespace std;

class marks
{
    int subjects[5];
    public:
        marks(int array[5])
        {
            for(int i = 0; i<5; i++)
            {
                subjects[i] = array[i];
            }
        }
        int operator[](int position)   // this is not written as friend function
                                       // also this is not static function
        {
            return subjects[position];
        }
};

int main()
{
    int array[5];
    cout<<"enter array of 5 elements"<<endl;
    for(int i = 0; i<5; i++)
    {
        cin>>array[i];
    }

    marks m1(array);
    cout<<"accessing subjects by direct object name"<<endl;
    cout<<m1[0]<<endl;
    cout<<m1[1]<<endl;
    cout<<m1[2]<<endl;
    cout<<m1[3]<<endl;
    cout<<m1[4]<<endl;

    return 0;
}