#include <stdio.h>

struct product{
    char pname[20];
    char pid[20];
    int price;
    int gst;
};

int main()
{
    FILE *fp;
    struct product p[10];
    struct product read[10];
    int n;
    
    printf("how many products you want to store\nAt max 10 allowed\n");
    scanf("%d", &n);

    for(int j = 0; j<n; j++)
    {
        printf("enter product name, product id, price and gst\n");
        scanf("%s%s%d%d", &p[j].pname, &p[j].pid, &p[j].price, &p[j].gst);
    }

    fp = fopen("s.txt", "a");

    fprintf(fp, "*%s\t*%s\t*%s\t*%s", "product name", "product id", "price", "gst");
    if(fp == NULL)
    {
        printf("file not created\n");
    }

    else
    {
        for(int i = 0; i<(n); i++)
        {
            fprintf(fp, "\n%s\t%s\t%d\t%d", p[i].pname, p[i].pid, p[i].price, p[i].gst);
            printf("data written successfully\n");
        }

        for(int k = 0; k<n; k++)
        {
            fscanf(fp, "\n%s\t%s\t%d\t%d", read[k].pname, read[k].pid, &read[k].price, &read[k].gst);
            printf("product %d = %s\t%s\t%d\t%d", k, read[k].pname, read[k].pid, read[k].price, read[k].gst);
        }

    }

    printf("%s  %s  %d  %d\n", read[1].pname, read[1].pid, read[1].price, read[1].gst);

    fclose(fp);

    return 0;
}