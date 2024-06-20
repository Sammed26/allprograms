#include <iostream>
using namespace std;


class heap
{
    public:
        int array[100];
        int size;
        
    heap()
    {
        size = 0;
    }

    void insert(int value)
    {
        size++;
        int index = size;

        array[index] = value;

        while(index > 1)
        {
            int parent_ind = index/2;

            // max heap
            if(array[parent_ind] < array[index])
            {
                swap(array[parent_ind], array[index]);
                index = parent_ind;
            }
            else
            {
                return ;
            }
        }

    }

    void print()
    {
        cout<<"printing max heap"<<endl;
        for(int i = 1; i<=size; i++)
        {
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }

    void delete_from_heap()
    {
        // it always deletes root

        if(size == 0)
        {
            cout<<"nothing to delete"<<endl;
            return ;
        }

        array[1] = array[size];
        size--;

        int index = 1;
        while(index < size)
        {
            int left_child = 2*index;
            int right_child = 2*index + 1;

            if(left_child < size && array[left_child] > array[index])
            {
                swap(array[left_child], array[index]);
                index = left_child;
            }
            else if(right_child < size && array[right_child] > array[index])
            {
                swap(array[right_child], array[index]);
                index = right_child;
            }
            else
            {
                return ;
            }
        }
    }

};

int main()
{

    heap h;

    h.insert(10);
    h.insert(40);
    h.insert(20);
    h.insert(60);
    h.insert(1);
    h.insert(12);

    h.print();

    h.delete_from_heap();

    h.print();

    return 0;
}
