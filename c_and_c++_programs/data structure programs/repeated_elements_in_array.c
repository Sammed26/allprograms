#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start, end;

    start = clock();

    int size;
    printf("etner size\n");
    scanf("%d", &size);

    int array[size];
    for(int i = 0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }

    int counter = 1;
    int repeated_element;

    for(int j = 0; j <size; j++)
    {
        for(int k = (j + 1); k<size; k++)
        {
            if((array[k] == array[j]) && (array[k] != -1))
            {
                counter++;
                repeated_element = array[j];
                array[k] = -1;
            }
        }

        if(counter > 1)
        {
            printf("element %d is repeated %d times\n", repeated_element, counter);

            counter = 1;
        }
    }

    end = clock();

    double difference;

    difference = (double)((end - start)/CLOCKS_PER_SEC);

    printf("total time required is %lf seconds\n", difference);

    return 0;
}