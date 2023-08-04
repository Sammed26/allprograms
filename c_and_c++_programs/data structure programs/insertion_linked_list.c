#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next; 
};

void traversal(struct node *ptr)
{
    while(ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }

}

struct node * insert_at_biginning(struct node *head, int data)
{
   struct node * ptr = (struct node *)malloc(sizeof(struct node));
   ptr->data = data;
   ptr->next = head;
   return ptr;

}

struct node * insert_at_index(struct node *head, int index, int data)
{
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    struct node * p = head;
    
    int i=0;
    while (i != index -1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
    
}

struct node * insert_at_end(struct node *head, int data)
{
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;

    while (p != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    head->data = 56;
    head->next = first;

    first->data = 7;
    first->next = second;

    second->data = 3;
    second->next = third;

    third->data = 67;
    third->next = fourth;

    fourth->data = 5;
    fourth->next = fifth;

    fifth->data = 6;
    fifth->next = NULL;

    printf("before any insertion\n");
    traversal(head);
   
   /* head = insert_at_biginning(head, 54);
    printf("after insertion at biginning\n");
    traversal(head);

    head = insert_at_index(head, 3, 0);
    printf("after inserting at the index\n");
    traversal(head); */

    head = insert_at_end(head, 987);
    printf("after inserting at the end\n");
    traversal(head);

   
    return 0;
}