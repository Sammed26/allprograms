#include <stdio.h>
int main()
{
    FILE* p;
    p = fopen("thanking receipt.c", "a");
    char name[20] = "sammed";
    char item[20] = "laptop";
    char outlet[20] = "shree";
   // fscanf(p, "%s%s%s", name, item, outlet);

    fprintf(p, "%s.name",name, item, outlet);



return 0;
}
