#include <stdio.h>

int main()
{   
    int array[] = {10, 2, 5, 8, 9, 6, 3, 3, 7, 1};

    int size = sizeof(array)/sizeof(int);
    
    int repeated_element;
    int missing_number;


    int duplicate_array[size+1];  // used to store actual array elements according to their
                                  // their values used as index of duplicate array
    for(int i = 0; i<=size; i++)
    {
        duplicate_array[i] = 0; // initialized with 0 to identify which index element is changed 
                                // and which is untouched by comparing it with 0
                                // if 0 then unchanged else changed
    }

    for(int j = 0; j<size; j++)
    {
        if(duplicate_array[array[j]] == 0) // if 0 then unchanged else changed
        {
            duplicate_array[array[j]] = array[j]; // stored actual array value = duplicate array index 
        }
        else
        {
            repeated_element = array[j]; // if 'if' fails then it is sure that current element is repeating
        }
    }

    for(int k = 1; k<= size; k++)
    {
        if(duplicate_array[k] != k)  // cheaked for missing elements
        {
            missing_number = k;
            break;
        }
    }

    printf("repeated element = %d\n", repeated_element);
    printf("missing element is %d\n", missing_number);

    return 0;
}