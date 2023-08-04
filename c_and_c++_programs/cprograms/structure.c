#include <stdio.h>
struct book
{
    int serialnumber;
    char title[30];
    char author[30];
    float prize;
};
void main()
{
    struct book b1, b2, b3;
    printf("for book b1 enter serial number, title, author, prize\n");
    b1.serialnumber = 1;
    b1.title[30] = "hi how are you";
    b1.author[30] = "sammed";
    b1.prize = 145260.23;

    printf("information about book 1\n");
    printf("serialnumber = %d\n", b1.serialnumber);
    //printf("title = %s\", b1.title[30]);
    printf("author = %s\n", b1.author[30]);
    printf("prize = %d\n", b1.prize);




}
