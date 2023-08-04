#include <stdio.h>
#include <stdlib.h>

int *fun()
{
    int *val;
    int x = 23;
    val = &x;
    return val;

}
int main()
{
    // case 1 = memory is deallocated means ptr is now pointing to non existing address

    int *ptr = (int *)malloc(3*sizeof(int));
    ptr[0] = 15;
    ptr[1] = 5;
    ptr[2] = 1;

    free(ptr);  // now ptr is a dangling pointer

    printf("address of 2nd element entered is %d\n", ptr[1]);


    // case 2 = local variables returns value and vanishes means that local variables in function doesn't exist now

    int *pt = *fun();
        // as soon as fun returns value it deletes and now pt is pointing to invalid location


    //case 3 = variable goes out of scope

    int *p;
    {
        int a = 3;
        p = &a;

    }
    printf("value of p is %d", p);
    //scope of variable a ends and hence p is pointing to invalid location so becames dangling pointer



return 0;
}
