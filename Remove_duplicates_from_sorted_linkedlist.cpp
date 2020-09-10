#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
struct node *head, *current=NULL;
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
void sort()
{
	struct node *ptr,*ctr=NULL;
	ptr=head;
	int temp=0;
	while(ptr!=NULL)
	{
		ctr=ptr->next;
		while(ctr!=NULL)
		{
			if(ptr->data>ctr->data)
			{
				temp=ptr->data;
				ptr->data=ctr->data;
				ctr->data=temp;
			}
			ctr=ctr->next;
		}
		ptr=ptr->next;
	}
}
void removeduplicates()
{
	struct node *ptr2;
	ptr2=head;
	while(ptr2->next!=NULL)
	{
		if(ptr2->data==ptr2->next->data)
		{
			ptr2->next=ptr2->next->next;
		}
		else
		{
			ptr2=ptr2->next;
		}
		
	}
}
void display()
{
	struct node *ptr=NULL;
	ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}
int main()
{
	int n;
	cout<<"enter n: ";
	cin>>n;
	int a[n];
	cout<<"Enter the values: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		insert(a[i]);
	}
	sort();
	removeduplicates();
	display();
	return 0;
}
