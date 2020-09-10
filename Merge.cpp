#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
struct node *head1,*current1=NULL;
void insert1(int val1)
{
	struct node *newnode1= (struct node*)malloc(sizeof(struct node));
	newnode1->data=val1;
	newnode1->next=NULL;
	if(head1==NULL)
	{
		head1= newnode1;
		current1= newnode1;
	}
	else
	{
		current1->next=newnode1;
		current1=newnode1;
	}
}

struct node *head,*current=NULL;
void insert2(int val1)
{
	struct node *newnode= (struct node*)malloc(sizeof(struct node));
	newnode->data=val1;
	newnode->next=NULL;
	if(head==NULL)
	{
		head= newnode;
		current= newnode;
	}
	else
	{
		current->next=newnode;
		current=newnode;
	}
}
void concat()
{
	struct node *pt;
	pt=head1;
	while(pt->next!=NULL)
	{
		pt=pt->next;
	}
	pt->next=head;
}

void display()
{
	struct node *ptr;
	ptr=head1;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}
int main()
{
	int a1[6]={7,6,4,3,2,10};
	int a2[7]={7,8,5,44,3,32,211};
	for(int i=0;i<6;i++)
	{
		insert1(a1[i]);
	}
	for(int i=0;i<7;i++)
	{
		insert2(a2[i]);
	}
	concat();
	display();
	return 0;
}
