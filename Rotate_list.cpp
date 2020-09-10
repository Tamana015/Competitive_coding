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
void rotate(int k)
{
	struct node *ctr=NULL;
	ctr=head;
	int b=0,c;
	while(b <2)
	{
		c=ctr->data;
		while(ctr->next!=NULL)
		{
			ctr->data=ctr->next->data;
			ctr=ctr->next;
		}
		ctr->data=c;
		b+=1;
		
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
	int a[5]={1,2,3,4,5};
	int k=2;
	for(int i=0;i<5;i++)
	{
		insert(a[i]);
	}
	rotate(k);
	display();
	return 0;
}
