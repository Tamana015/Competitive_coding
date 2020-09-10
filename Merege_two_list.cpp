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
struct node *head1=NULL;
void insert1(int val1)
{
	struct node *newnode1 = (struct node*)malloc(sizeof(struct node));
	struct node *current1;
	newnode1->data=val1;
	newnode1->next=NULL;
	if(head1==NULL)
	{
		head1=newnode1;
		current1=newnode1;
	}
	else
	{
		current1->next=newnode1;
		current1=newnode1;
	}
}
void merge()
{
	struct node *ptr=NULL;
	ptr=head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=head1;
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
	int a[4]={2,4,1,7};
	int b[6]={9,75,55,4,33,3};
	for(int i=0;i<4;i++)
	{
		insert(a[i]);
	}
	for(int i=0;i<6;i++)
	{
		insert1(b[i]);
	}
	merge();
	display();
	return 0;
}
