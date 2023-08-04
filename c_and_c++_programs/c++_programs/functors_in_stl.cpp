#include <iostream>
#include <functional>
using namespace std;

int main()  // functors are the inbuilt functions that you can use directly
{
    int array[7] = {26, 4, 78, 12, 69, 35, 45};
    sort(array, array+7, greater<int>());
    for (int i = 0; i < 7; i++)
    {
        cout<<array[i]<<endl;
    }
    

    return 0;
}