#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node* next;
}*head;


void push(struct node *head)
{         struct node* first;

    int n ,data;
    printf("enter number of nodes");
    scanf("%d",&n);
     printf("enter the data for node 1");
     scanf("%d",&data);
             first=head;

     first->data=data;
     first->next=NULL;
           struct node* temp;
        temp=head;
    for (int i=2;i<=n;i++)
    {   struct node* newnode;
        newnode=(struct node*)malloc(sizeof(struct node));

        printf("enter the data for node %d",i);
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;
    }
}

void deleteAtFirst(struct node **head)
{   struct node *temp,*newnode;
    temp=*head;
    *head=(*head)->next;
    free(temp);
/*    newnode=*head;
while(newnode!=NULL)
        {printf("data is %d\n",temp->data);
                temp=temp->next;
        }*/
}

void deleteAtEnd(struct node *head)
{
    struct node* temp,*previous;
    temp=head;
    //empty list
   /* if (temp==NULL)
    {
        printf("link list is empty\n");
        return;
    }
    //if only one node
        if(temp->next==NULL)
     {

         *head=NULL;
    */
    while(temp->next!=NULL)
    {
        previous=temp;
        temp=temp->next;
    }
    previous->next=NULL;
    free(temp);

}

struct node *insertAtStart(struct node *head,int data)
{

    if(head->next == NULL)
    {
        head->data = data;
        return head;
    }
    else
    {
        struct node *new;
        new = (struct node*)malloc(sizeof(struct node));
        new->data = data;
        new->next = head;
        return new;
    }
    
}

void display(struct node *head)
{      
    while(head != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
}

int main ()
{
    int data,ch;
    
    head = (struct node*)malloc(sizeof(struct node));
    head->next = NULL;

    while(1){
        printf("\n1.push\n2.deleteatfirst\n3.display\n4.deleteatend\n5.display\n6.insertatstart\n7.exit");

        printf("\nenter choice number");
        scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        push(head);
        break;

        case 2:
        deleteAtFirst(&head);
        break;

        case 3:

        deleteAtEnd(head);
        break;

        case 4:
        deleteAtFirst(&head);
        break;

        case 5:
        display(head);
        break;

        case 6:
        printf("enter data for new node");
        scanf("%d", &data);
        head = insertAtStart(head, data);
        display(head);
        break;

        case 7:
        goto end;

        default:
        printf("enter proper input\n");

    }
    }
    end:

return 0;
}