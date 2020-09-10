#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insert(int val)
{
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	struct node *current;
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		current=newnode;
	}
	else
	{
		current->next=newnode;
		current=newnode;
	}
}
void swap()
{
	struct node *ptr=NULL;
	ptr=head;
	int temp=0;
	while(ptr!=NULL)
	{
		temp=ptr->data;
		ptr->data=ptr->next->data;
		ptr->next->data=temp;
		ptr=ptr->next->next;
	}
}
void display()
{
	struct node *pt;
	pt=head;
	while(pt!=NULL)
	{
		cout<<pt->data<<" ";
		pt=pt->next;
	}
}
int main()
{
	int a[10]={2,4,1,5,6,7,5,4,3,77};
	for(int i=0;i<10;i++)
	{
		insert(a[i]);
	}
	swap();
	display();
	return 0;
}
