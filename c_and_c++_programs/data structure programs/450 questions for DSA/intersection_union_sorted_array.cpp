/* Find the Union and Intersection of the two sorted arrays */

#include <iostream>
using namespace std;

void intersection_union_in_array(int* inter, int siz1, int* u, int siz2, int* a1, int* a2)
{
    int gre_siz;
    if(siz1 > siz2)
        gre_siz = siz1;         // this is done because intersection array is obviously 
    else                        // not greater than maximum array size
        gre_siz = siz2;

    for(int i = 0; i<siz1; i++)
    {
        for(int j = 0; i<siz2; i++)
        {
            if(a1[i] != a2[j])
            {
                u[i] = a2[j];
            }
            if(a1[i] == a2[j])
            {
                u[i] = a1[i];
                inter[i] = a1[i];
                a2[j] = -1;
            }
        }
    }
}

void printarray(int *array , int size)
{
    cout<<"printing array"<<endl;
    for (int i = 0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int siz1, siz2;
    cout<<"enter the size of first array"<<endl;
    cin>>siz1;
    int array[siz1];
    cout<<"enter the size of second array"<<endl;
    cin>>siz2;
    int arr[siz2];

    cout<<"enter first array elements"<<endl;
    for(int i = 0; i<siz1; i++)
    {
        cin>>array[i];
    }
    cout<<"enter second array elements"<<endl;
    for(int i = 0; i<siz2; i++)
    {
        cin>>arr[i];
    }

    int unionarray[siz1 + siz2];
    int intersectionarrayindex;
    if(siz1 > siz2)
    {
        intersectionarrayindex = siz1;
    }
    else
    {       
        intersectionarrayindex = siz2;
    }

    int intersectionarray[intersectionarrayindex];

    intersection_union_in_array(intersectionarray, siz1, unionarray, siz2, array, arr);

    cout<<"intersection of arrays"<<endl;
    printarray(intersectionarray, intersectionarrayindex);

    cout<<"union of arrays"<<endl;
    printarray(unionarray, (siz1 + siz2));

    return 0;
}