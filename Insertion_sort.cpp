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
void sort()
{
	struct node *ctr,*ptr=NULL;
	ptr=head;
	int temp=0;
	while(ptr!=NULL)
	{
		ctr=ptr->next;
		while(ctr!=NULL)
		{
			if(ctr->data<ptr->data)
			{
				temp=ctr->data;
				ctr->data=ptr->data;
				ptr->data=temp;
			}
			ctr=ctr->next;
		}
		ptr=ptr->next;
	}
}
void display()
{
	struct node *ptr;
	ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}
int main()
{
	int a[3]={1,3,2};
	for(int i=0;i<3;i++)
	{
		insert(a[i]);
	}
	sort();
	display();
	return 0;
}
