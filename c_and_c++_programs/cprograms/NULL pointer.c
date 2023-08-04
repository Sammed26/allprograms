#include <stdio.h>#include <stdio.h>#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, i;
  // int *ptr = NULL;
    int* ptr;
   printf("enter the size that you want to allocate\n");
   scanf("%d", &n);


   if(ptr == NULL)
   {
     printf("there is not enough space so can't allocate memory\n");
   }

   else
   {
     ptr = (int*)malloc(n*sizeof(int));

     printf("enter the numbers\n");

     for(i=0; i<n; i++)
     {
        scanf("%d", &ptr[i]);

     }
   }

   printf("////  printing given numbers  ////\n");
     for(i=0; i<n; i++)
     {

        printf("%d\n", ptr[i]);

     }



return 0;
}
