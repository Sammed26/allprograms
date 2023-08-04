#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *create_node(int data)
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

void inorder(struct node *n)
{
    if(n != NULL)
    {
        inorder(n->left);
        printf("%d ", n->data);
        inorder(n->right);
    }
}

int main()
{
    struct node *s;
    s = create_node(5);

    struct node *s1;
    s1 = create_node(3);
    s->left = s1; 

    struct node *s2;
    s2 = create_node(45);
    s->right = s2;

    struct node *s3;
    s3 = create_node(1);
    s1->left = s3;

    struct node *s4;
    s4 = create_node(14);
    s2->left = s4;

    struct node *s5;
    s5 = create_node(56);
    s2->right = s5;

    struct node *s6;
    s6 = create_node(10);
    s4->left = s6;

    inorder(s);



    return 0;
}