#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

 void traverse_linked_list(struct Node *ptr)
{
    printf("the elements in linked list are\n");
    while(ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 23;
    head->next = second;

    second->data = 76;
    second->next = third;

    third->data = 89;
    third->next = fourth;

    fourth->data = 43;
    fourth->next = NULL;

    traverse_linked_list(head);



return 0;
}
