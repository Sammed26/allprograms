#include<iostream>
using namespace std;

class node
{
	public:
		int data;
		node *next;
		node()
		{
			data=0;
		}
};

class linkedlist
{	private:
	node* head;
	node* creatnode();
	void initnode(node *nnode,int data);
	
	public:
		void attachbegin(int data);
		void display();
	
};

node* linkedlist::creatnode()
{
	node *newnode;
	newnode=new(node);
	return newnode;
}

void linkedlist::initnode(node *nnode,int data)
{
	nnode->data=data;
}
void linkedlist::attachbegin(int data)
{
	if(head==NULL)
	{
			node *temp=creatnode();
			initnode(temp,data);
			
			head=temp;
			head->next=NULL;
			//return head;
	}
	else
	{
			node *temp=creatnode();
			initnode(temp,data);
			
			temp->next=head;
			head=temp;
			//return head;	
	}
}

void linkedlist::display()
{
	node *temp=head;
	while(temp != NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}

int main()
{
	linkedlist l1;
	l1.attachbegin(10);
	l1.attachbegin(20);
	l1.display();

    return 0;
}