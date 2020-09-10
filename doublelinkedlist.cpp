#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *current,*head=NULL;

void insert(int val)
{
	struct node *newnode= (struct node*)malloc(sizeof(struct node));
	newnode->prev=NULL;
	newnode->data=val;
	newnode->next=NULL;
    if(head==NULL)
    {
    	head=newnode;
    	current=newnode;
    }
    else
    {
    	newnode->prev=current;
    	current->next=newnode;
    	current= newnode;
    }
}
void display()
{
	struct node *ptr;
	ptr= current;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->prev;
	}
}
int main()
{
	insert(19);
	insert(323);
	display();
	return 0;
}
