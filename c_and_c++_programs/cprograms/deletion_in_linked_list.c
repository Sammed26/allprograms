#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node * linked_list_traversal(struct node * ptr)
{
    while(ptr != NULL)
    {
        printf("%d\n", ptr->data); 
        ptr = ptr->next;
    }
}

struct node * delete_first_node(struct node *head)
{
    struct node *p = head;
    head = head->next;
    free(p);
    return head;
} 

struct node * delete_in_between(struct node * head, int index)
{
    struct node *p = head;

  //  while(p != (index - 1))
    for(int i = 0; i < (index - 1); i++)
    {
        p = p->next;
    }

    struct node *temp;
    temp = p->next;
    p->next = temp->next;
    free(temp);
    
    return head;
}

struct node * delete_last(struct node *head)
{
    struct node *p = head;
    struct node *temp = head->next;
    while (temp->next != NULL)
    {
        p = p->next;
        temp = temp->next;
    }

    p->next = NULL;
    free(temp);
    
    return head;
}

struct node * delete_by_element_value(struct node * head, int value)
{
    struct node *p = head;
    struct node *temp = head->next;
    while ((temp->data != value) && (temp->next == NULL))
    {
        p = p->next;
        temp = temp->next;
    }
    
    if(temp->data == value)
    {
        p->next = temp->next;
        free(temp);
    }
 
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

    head->data = 6;
    head->next = first;

    first->data = 26;
    first->next = second;

    second->data = 9;
    second->next = third;

    third->data = 74;
    third->next = fourth;

    fourth->data = 64;
    fourth->next = fifth;
    
    fifth->data = 3;
    fifth->next = NULL;

    printf("original linked list without any deletion\n");
    linked_list_traversal(head);

  /*  printf("linked list after deletion of first node\n");
    head = delete_first_node(head);
    head = delete_first_node(head);
    printf("linked list after deleting first element\n");
    linked_list_traversal(head); */

   /* head = delete_in_between(head, 3);
    head = delete_in_between(head, 3);
    printf("the linked list after deleting a node in between\n");
    linked_list_traversal(head); */

   /* head = delete_last(head);
    head = delete_last(head);
    printf("the linked list after deletion of last node\n");
    linked_list_traversal(head); */

    head = delete_by_element_value(head, 74);
    printf("linked list after deleting the node with given value\n");
    linked_list_traversal(head); 

    return 0;

}