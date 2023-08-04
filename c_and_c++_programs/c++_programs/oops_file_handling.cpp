#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // ofstream out("aniket.txt");
    // out<<"how are you";

    // out.close();

    ifstream in;
    in.open("aniket.txt");

    string readed_data;
    while (getline(in, readed_data))
    {                
        cout<<readed_data<<endl;
    }
    in.close();

    return 0;
}