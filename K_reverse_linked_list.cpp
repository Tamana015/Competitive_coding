#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
struct node
{
	int data;
	struct node* next;
};
struct node *head=NULL;
struct node *current=NULL;
void insert(int val)
{
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
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
struct node *ptr=NULL;
void k_reverse(int K)
{
	ptr=head;
	int temp=0;
	while(ptr!=NULL)
	{
		temp=ptr->next->data;
		ptr->next->data=ptr->data;
		ptr->data=temp;
		ptr=ptr->next->next;
	}
}
void display()
{
	struct node *ptr1=NULL;
	ptr1=head;
	while(ptr1!=NULL)
	{
		cout<<ptr1->data<<" ";
		ptr1=ptr1->next;
	}
}
int main()
{
	int a[6]={1,2,3,4,5,6};
	int k=2;
	for (int i=0;i<6;i++)
	{
		insert(a[i]);
	}
	k_reverse(k);
	display();
	return 0;
}
