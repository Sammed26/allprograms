#include <stdio.h>

int linearsearch(int array[], int size, int element)
{
    for(int i= 0; i<size; i++)
    {
        if(array[i] == element)
        {
            return i;
        }

    }
      //  else
        {
            return -1;
        }


}

int main()
{
    int array[] = {3,5,7,8,18,23,34,56,67,78,86,476,987};
    int size = sizeof(array)/sizeof(int);
    int search;
    int element =      8;
    search = linearsearch(array, size, element);
    if(search != -1)
        {
          printf("the element %d is found at %d index\n", element, search);
        }
    else
        {
          printf("the element not found\n");
        }

return 0;
}
