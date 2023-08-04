#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> weightmap;
    weightmap["sammed"] = 45;
    weightmap["sam"] = 80;
    weightmap["mmed"] = 0;
    weightmap["samd"] = 450;
    weightmap["s"] = 5;

    map<string, int> :: iterator i;
    for(i = weightmap.begin(); i != weightmap.end(); i++)
    {
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
    cout<<endl;

    weightmap.insert({{"rk" , 859}, {"eoietr" , 8}});
    for(i = weightmap.begin(); i != weightmap.end(); i++)
    {
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }

    cout<<"maximum size is "<<weightmap.max_size()<<endl;

    return 0;
}