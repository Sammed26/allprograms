#include <stdio.h>

struct driver
{
    char name[20];
    char licence_no[10];
    char route[20];
    int kms;

};

int main()
{
    struct driver d1,d2,d3;
    printf("enter 1st driver information\n name\n licence number\n route\n kilometers\n");
    gets(d1.name);
    gets(d1.licence_no);
    gets(d1.route);
    scanf("%d", &d1.kms);


    printf("enter 2st driver information\n name\n licence number\n route\n kilometers\n");
    gets(d2.name);
    gets(d2.licence_no);
    gets(d2.route);
    scanf("%d", &d2.kms);


    printf("enter 3st driver information\n name = \n licence number = \n route =\n kilometers =\n");
    gets(d3.name);
    gets(d3.licence_no);
    gets(d3.route);
    scanf("%d", &d3.kms);


    printf("1st driver information\n name =\n licence number =\n route =\n kilometers =\n");
    puts(d1.name);
    printf("\n");
    puts(d1.licence_no);
    printf("\n");
    puts(d1.route);
    printf("\n");
    printf("%d\n", d1.kms);

    printf("2st driver information\n name = \n licence number = \n route = \n kilometers = \n");
    puts(d2.name);
    printf("\n");
    puts(d2.licence_no);
    printf("\n");
    puts(d2.route);
    printf("\n");
    printf("%d\n", d2.kms);

    printf("3st driver information\n name\n licence number\n route\n kilometers\n");
    puts(d3.name);
    printf("\n");
    puts(d3.licence_no);
    printf("\n");
    puts(d3.route);
    printf("\n");
    printf("%d\n", d3.kms);


return 0;
}
