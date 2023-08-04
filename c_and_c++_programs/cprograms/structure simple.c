#include <stdio.h>

struct traveller {
    int registration;
    float prize;
    char name[20];

};
int main()
{
    struct traveller t1;

    printf("enter traveller registration number, prize, name\n");
    scanf("%d%f%s", &t1.registration, &t1.prize, &t1.name);
    printf("%d\n %.2f\n %s\n", t1.registration, t1.prize, t1.name);



return 0;
}
