#include <iostream>
#include <list>
using namespace std;

// template<class T>
void display(list<float> &l)
{
    list<float> :: iterator itera = l.begin();
    for(itera; itera != l.end(); itera++)
    {
        cout<<*itera<<" ";
    }
    cout<<endl;
}

int main()
{
    list<float> list1;   // list of 0 length
    list1.push_back(26);
    list1.push_back(7);
    list1.push_back(75);
    list1.push_back(85);
    list1.push_back(55);
    list1.push_back(596);
    list1.push_back(48);
    list1.push_back(8);
    display(list1);

    list1.sort();
    display(list1);

    list<float> list2(5);   // list of size 5
    list<float> :: iterator iter;
    iter = list2.begin();
    *iter = 85.9;
    *iter++;
    *iter = 8;
    *iter++;
    *iter = 9;
    *iter++;
    *iter = 5.9;
    *iter++;
    *iter = 5.9;
    *iter++;
    display(list2);
    list2.pop_front();   // push.front also exist
    display(list2);
    list2.sort();
    display(list2);

    list1.merge(list2);
    display(list1);

    return 0;
}