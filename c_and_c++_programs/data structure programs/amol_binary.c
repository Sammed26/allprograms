#include <stdio.h>
int binary_recursive(int arr[10], int low, int high, int element)
{
    int beg = low;
    int end = high;
    int mid;
    if (beg == end)
    {

        if (arr[beg] == element)
        {
            return beg;
        }
    }
    else
    {
        mid = (beg + end) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] > element)
        {
            binary_recursive(arr, beg, (mid - 1), element);
        }
        else
        {
            binary_recursive(arr, (mid + 1), end, element);
        }
    }
}
int main()
{
    int arr[10];
    int element, search;
    printf("enter sorted array:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int choice;

    while (1)
    {
        printf("enter choice\n1] search\n2]exit\n");
        scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        printf("enter element to search array:\n");
        scanf("%d", &element);

        search = binary_recursive(arr, 0, 9, element);

        if ((search != -1) && (search < 10) && (search > -1))
        {
            printf("the element %d is found at index %d\n", element, search);
        }
        else
        {
            printf("element is not found\n");
        }

        break;

    case 2:
        printf("baher padat ahe\n");
        goto end;

    default:
        printf("neat input de ki\n");

    }
    
    

    }

end:

    return 0;
}