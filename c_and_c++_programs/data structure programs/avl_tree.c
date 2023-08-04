#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *left;
    struct node *right;
    int height;
    int bf;
};

int getbf(struct node *n)
{
    if(n == NULL)
    {
        return 0;
    }
    return (getheight(n->left) - getheight(n->right));
}

int getheight(struct node *n)
{
    if(n == NULL)
    {
        return 1;
    }
}

struct node *leftrotation()

int main()
{


    return 0;
}