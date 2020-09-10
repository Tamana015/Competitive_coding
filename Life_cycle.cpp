#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
struct node *head=NULL;
void insert(int val)
{
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	struct node *current;
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
		current=newnode;
	}
	if(newnode->next==NULL)
	{
		newnode->next=newnode->prev;
	}
}
void checkloop()
{
	struct node *ptr,*ctr=NULL;
	ptr=head;
	while(ptr!=NULL)
	{
	
		ctr=ptr->next->next;
		if(ctr==ptr)
		{
			cout<<"True "<<ptr->data<<endl;
			break;
		}
		ptr=ptr->next;
	}
}
int main()
{
	int a[4]={1,2,3,4};
	for(int i=0;i<4;i++)
	{
		insert(a[i]);
	}
	checkloop();
	return 0;
}
