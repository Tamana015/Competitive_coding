//Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
//Output: 7 -> 0 -> 8
//  342 + 465 = 807
#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head=NULL;
struct node *current;
void insert(int val)
{
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
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
}
struct node *head1=NULL;
struct node *current1;
void insert1(int val1)
{
	struct node *newnode1 = (struct node*)malloc(sizeof(struct node));
	newnode1->prev=NULL;
	newnode1->data= val1;
	newnode1->next=NULL;
	if(head1==NULL)
	{
		head1=newnode1;
		current1=newnode1;
	}
	else
	{
		newnode1->prev=current1;
		current1->next=newnode1;
		current1=newnode1;
	}
}
void add()
{
	struct node *ptr1,*ptr=NULL;
	ptr=current;
	ptr1=current1;
	int b=0,c=0;
	while(ptr!=NULL || ptr1!=NULL)
	{
		int b = c+ (ptr->data)+ (ptr1->data);
		if(b>9)
		{
		    int k=b;
			b= b%10;
			c= k/10;
		}
		ptr->data=b;
		ptr=ptr->prev;
		ptr1=ptr1->prev;
	}
}
void display()
{
	struct node *pt;
	pt=current;
	while(pt!=NULL)
	{
		cout<<pt->data<<" ";
		pt=pt->prev;
	}
}
int main()
{
	int a[3]={2,4,3};
	int b[3]={5,6,4};
	for(int i=0;i<3;i++)
	{
		insert(a[i]);
	}
	for(int i=0;i<3;i++)
	{
		insert1(b[i]);
	}
	add();
	display();
	return 0;
}
