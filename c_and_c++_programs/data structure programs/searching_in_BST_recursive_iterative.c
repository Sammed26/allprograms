#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

void preorder(struct node *r)
{
    if(r != NULL)
    {
        printf("%d ", r->data);
        preorder(r->left);
        preorder(r->right);
    }
}

void postorder(struct node *r)
{
    if(r != NULL)
    {
        postorder(r->left);
        postorder(r->right);
        printf("%d ", r->data);
    }
}

void inorder(struct node *r)
{
    if(r != NULL)
    {
        inorder(r->left);
        printf("%d ", r->data);
        inorder(r->right);
    }
}

struct node *create_node(int data)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;

    return p;
}

int isBST(struct node *r)
{
    static struct node *prev = NULL;
    if(r != NULL)
    {
        if(!isBST)
        {
            return 0;
        }
        if((prev != NULL) && (r->data <= prev->data))
        {
            return 0;
        }
        prev = r;
        return isBST(r->right);
    }
    else
    {
        return 1;
    }
}

struct node *search_recursive(struct node *p, int data)
{
    if(p == NULL)
    {
        return NULL;
    }
    else
    {
        if(p->data == data)
        {
            return p;
        }
        else if(p->data < data)
        {
            return search_recursive(p->right, data);
        }
        else
        {
            return search_recursive(p->left, data);
        }
    }
}

struct node* iterative_search(struct node* p, int data)
{
    while(p != NULL)
    {
        if(p->data == data)
        {
            return p;
        }
        else
        {
            if(data > p->data)
            {
                p = p->right;
            }
            else if(data < p->data)
            {
                p = p->left;
            }
            else
            {
                return NULL;
            }
        }
        
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

    printf("preorder\n");
    preorder(s);
    printf("\n");
    printf("postorder\n");
    postorder(s);
    printf("\n");
    printf("inorder\n");
    inorder(s);

    int isbts;
    isbts = isBST(s);
    if(isbts == 0)
    {
        printf("\nnot a binary search tree\n");
    }
    else if(isbts == 1)
    {
        printf("\nit is a binary tree\n");
    }
    else
    {
        printf("\nkuch to gadbad hein\n");
    }


    struct node *searched = NULL;
    //searched = search_recursive(s, 56);
    searched = iterative_search(s, 11);

    if(searched != NULL)
    {
        printf("element found\n");
    }
    else
    {
        printf("element not found\n");
    }

    return 0;
}