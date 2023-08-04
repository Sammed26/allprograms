#include <stdio.h>

int binarysearch(int array[], int size, int element)
{
    int low = 0;
    int high =  (size - 1);
    int mid;

    while(low <= high)
    {
        mid = (low + high)/2;
        if(array[mid] == element)
        {
            return mid;
        }

        if(array[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }

    }
    return -1;

}

int main()
{
    int array[] = {3,5,7,8,18,23,34,56,67,78,86,476,987};
    int element = 56;
    int size = sizeof(array)/sizeof(int);

    int search = binarysearch(array, size, element);

    if(search != -1)
    {
        printf("the element %d is found at index %d\n", element, search);
    }
    else
    {
        printf("element not found\n");
    }


return 0;
}
