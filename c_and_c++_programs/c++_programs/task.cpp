#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{1,2,3},{4, 55, 6}, {7, 8, 79}};

    // for(int i = 0; i<9; i++)
    // {
    //     cout<<*(*arr + i)<<" ";
    // }

    cout<<(uintptr_t)(*arr + 0) <<" ";
    cout<<(uintptr_t)(*arr + 1) <<" ";
    cout<<(uintptr_t)(*arr + 2) <<" ";
    cout<<(uintptr_t)(*arr + 3) <<" ";
    cout<<(uintptr_t)(*arr + 4) <<" ";
    cout<<(uintptr_t)(*arr + 5) <<" ";
    cout<<(uintptr_t)(*arr + 6) <<" ";
    cout<<(uintptr_t)(*arr + 7) <<" ";
    cout<<(uintptr_t)(*arr + 8) <<" ";

    cout<<endl<<(uintptr_t)*arr<<endl;

    cout<<*(*arr + 0) <<" ";
    cout<<*(*arr + 1) <<" ";
    cout<<*(*arr + 2) <<" ";
    cout<<*(*arr + 3) <<" ";
    cout<<*(*arr + 4) <<" ";
    cout<<*(*arr + 5) <<" ";
    cout<<*(*arr + 6) <<" ";
    cout<<*(*arr + 7) <<" ";
    cout<<*(*arr + 8) <<" ";

    return 0;
}