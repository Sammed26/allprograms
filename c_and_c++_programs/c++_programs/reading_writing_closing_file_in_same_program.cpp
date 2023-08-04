#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    // writing to file
    ofstream write_to_file("sample3.txt");
    string data;
    cout<<"enter what you want to write in file"<<endl;
    //cin>>data; // takes only first coming string if space comes it not takes from it
    getline(cin, data);  // this function is included in 'string.h' header file.
                         // this takes whole line as a string with spaces.
                         // If you want to take another line, then after firest 'getline'
                         // you need to use 'cin.ignore()'.
    write_to_file<<data;
    write_to_file.close();

    // reading from file 
    ifstream read_fron_file("sample3.txt");
    string readed_data;    
    getline(read_fron_file, readed_data);   // this is used to read whole line from the file
    cout<<"data readed from file is = "<<readed_data<<endl;
    read_fron_file.close();


    return 0;
}