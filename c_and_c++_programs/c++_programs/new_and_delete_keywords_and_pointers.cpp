#include <iostream>
using namespace std;

int main()
{
    int a = 26;
    int* p = &a;
    cout<<"value of a is "<<*p<<endl;

    // new keyword/opertor = used to allocate memory dynamically using pointers
    int *ptr = new int(27);
    cout<<"value of new integer allocated dynamically using new keyword is "<<*ptr<<endl;

    float *array = new float[5];
    array[0] = 21.21;
    array[1] = 22.22;
    *(array + 2) = 23.23;
    *(array + 3) = 24.24;
    array[4] = 25.25;
    for(int i = 0; i<5; i++)
    {
        cout<<"array[i] = "<<array[i]<<endl; // we can use 'array[i]' or *(array + i) to print values
    }

    cout<<endl<<endl;

    // delete keyword/operator = used to free memory allocated dynamically
    delete ptr;
    cout<<"value of new integer allocated dynamically using new keyword is "<<*ptr<<endl;

    delete[] array;
    for(int i = 0; i<5; i++)
    {
        cout<<"array[i] = "<<array[i]<<endl; // array may be print correctly because 
                                             // array deleted but that values still present there
    }



    return 0;
}