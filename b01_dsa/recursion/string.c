#include <stdio.h>
#include <string.h>

/*
returntype function_name(parameters)
{
    // code
}
*/

int print()
{
    printf("Good Morning.\n");
    printf("Hello, How are you?\n");
    printf("I'm fine.\n\n");

    return 10;
}

struct student 
{
    int rollno;
    char name[10];
    float marks;
};

int main()
{
    struct student st1;
    st1.rollno = 26;
    st1.name[0] = 's';
    st1.name[1] = 'a';
    st1.name[2] = 'm';
    st1.name[3] = '\0';
    st1.marks = 100;
    printf("rollno = %d \n", st1.rollno);
    printf("name = %s \n", st1.name);
    printf("marks = %f \n", st1.marks);


    /*

    int arr[] = {1, 2, 3};
    printf("size of arr = %d \n", sizeof(arr));
    int a = 26;
    printf("size of a = %d \n", sizeof(a));
    // printf("%d \n", arr);
    // printf("%d \n", *(arr+1));

    // char name[] = {'s', 'a', 'm', 'm', 'e', 'd', 'g', 'd', '\0'};
    char name[] = "sammed";
    // printf("%s \n", (name+1));
    printf("length of string = %d \n", strlen(name));
    printf("size of name = %d \n", sizeof(name));

    */

    /*
        Good Morning.
        Hello, How are you?
        I'm fine.
    */

    /*
    printf("Good Morning.\n");
    printf("Hello, How are you?\n");
    printf("I'm fine.\n\n");

    printf("some task is done\n\n");

    printf("Good Morning.\n");
    printf("Hello, How are you?\n");
    printf("I'm fine.\n\n");
    */

    /*
    int val = print();
    printf("returned value = %d \n", val);
    printf("some task is done\n\n");
    print();

    */

    return 0;
}