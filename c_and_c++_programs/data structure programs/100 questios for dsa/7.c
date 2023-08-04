#include <stdio.h>

void adds_upto_target(int array[], int target, int* index_1, int* index_2, int size)
{
    int i = 0; 
    int j = 0;
    for(i = 0; i<size; i++)
    {
        for(j = 0; j<size; j++)
        {
            if(((array[i] + array[j]) == target) && (i != j))
            {
                *index_1 = i;
                *index_2 = j;
                goto end;
            }
        }   
    }
    end:
}

int main()
{
    int array[] = {12, 52, 3, 6, 78, 26, 8, 7, 96, 10};
    int size = sizeof(array)/sizeof(int);

    int target;
    int index1 = -1;
    int index2 = -1;
    printf("enter target\n");
    scanf("%d", &target);

    adds_upto_target(array, target, &index1, &index2, size);

    if(index1 == -1)
    {
        printf("no any elements are going to add upto your given target\n");
    }
    else
    {
            printf("%d and %d index's are adds upto target you given\n", index1, index2);
    }

    return 0;
}