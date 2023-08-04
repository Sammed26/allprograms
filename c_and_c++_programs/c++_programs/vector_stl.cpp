#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    for(int i = 0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";   // this two different methods to display vector
        //cout<<v[i]" ";
    }
}

int main()
{
    // int elementNo;
    // cout<<"enter how many elements you want to insert in vector"<<endl;
    // cin>>elementNo;
    // vector<float> vector1;  // this is zero length vector
    // float element;
    // for(int i = 0; i<elementNo; i++)
    // {
    //     cout<<"enter element\n";
    //     cin>>element;
    //     vector1.push_back(element);
    // }
    // cout<<endl;
    // display(vector1);
    // cout<<"popping an element from vector"<<endl;
    // vector1.pop_back();
    // display(vector1);
    // //cout<<"inserting element at any position using iterator"<<endl;
    

    // vector<int> vector2(5);   // creating vector of specific lenght
    // int element;
    // for(int i = 0; i<5; i++)
    // {
    //     cout<<"enter element\n";
    //     cin>>element;
    //     vector2.push_back(element);
    // }
    // //display(vector2);

    // vector<int> vector3(vector2);  // creating vector from vector
    // display(vector3);


    vector<char> vector4(10, 's');  // puts 's' in vector for 10 times
    display(vector4);

    return 0;
}