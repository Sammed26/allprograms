#include <stdio.h>
int main()
{
    FILE *ptr;
    // **** for reading a file ****
    ptr = fopen("thanking receipt.c", "r");
    char str[50];
    fscanf(ptr, "%s", str);
    printf("the content is - %s\n", str);

    // **** for writing a file ****

  //  ptr = fopen("file.c", "w");
  //  char str[50] = "who you are?";  //this changes actual content in included file by str[] = ....
   // fscanf(ptr, "%s", str);




return 0;
}
