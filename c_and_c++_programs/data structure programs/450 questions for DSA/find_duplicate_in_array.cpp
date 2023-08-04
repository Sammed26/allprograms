// find duplicate in an array of N+1 natural numbers

#include <iostream>
using namespace std;

void find_duplicate(int* array, int size)
{
    int temparr[size];
    for(int i = 0; i<size; i++)
    {
        temparr[i] = -1;
    }
    for(int i = 0; i<size; i++)
    {
        int index_by_mod = array[i] % size;
        if((temparr[index_by_mod] != -1)  &&  (temparr[index_by_mod] == array[i]))
        {
            cout<<"repeated element found"<<" the number is "<<array[i]<<endl;
            break;
        }
        else if(temparr[index_by_mod] != -1)
        {
            int j = index_by_mod;
            while (temparr[j] != -1)
            {
                j = (j + 1) % size;
            }
            temparr[j] = array[i];
        }
        else
        {
            temparr[index_by_mod] = array[i];
        }
    }
}

int main()
{
    int array[21] = {2, 1, 4, 3, 5, 16, 8, 9, 7, 12, 13, 17, 18, 15, 14, 20, 11, 10, 16, 19, 6};

    find_duplicate(array, 21);


    return 0;
}
