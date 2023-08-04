#include <stdio.h>

int main()
{
    int array[] = {21, 54, 68, 1, 2, 32, 78, 96, 65, 10};
    int size = sizeof(array)/sizeof(int);

    int target = 42;

    int i, j;
    for(i = 0; i<size; i++)
    {
        for(j = 0; j<size; j++)
        {
            if(((array[i]+array[j]) == target) && (i != j))
            {
                printf("%d and %d are two numbers that add upto target\n", array[i], array[j]);
                goto end;
            }
        }
    }

end:
    return 0;
}