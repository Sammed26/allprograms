#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create_node(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    
    return n;

}

void print(struct node *n) //this type of traversing is not done in trees this is 
                           // done only to see data is placed properly or not
{
    struct node *n_l = n;
    struct node *n_r = n;
    printf("printing left side\n");
    while(n_l != NULL)
    {
        printf("%d\n", n_l->data);
        n_l = n_l->left;
    }

    printf("printing right side\n");
    while(n_r != NULL)
    {
        printf("%d\n", n_r->data);
        n_r = n_r->right;
    }
}

int main()
{
    struct node *r;
    r = create_node(56);

    struct node *l1;
    l1 = create_node(26);
    r->left = l1;

    struct node *l2;
    l2 = create_node(85);
    l1->left = l2;

    struct node *l3;
    l3 = create_node(285);
    l2->left = l3;

    struct node *r1;
    r1 = create_node(2);
    r->right = r1;

    struct node *r2;
    r2 = create_node(8);
    r1->right = r2;

    struct node *r3;
    r3 = create_node(5);
    r2->right = r3;

    print(r); //this type of traversing is not done in trees this is 
              // done only to see data is placed properly or not


    return 0;
}