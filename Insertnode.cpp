#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
struct node *head,*current=NULL;
void insert(int val)
{
	struct node *newnode= (struct node*)malloc(sizeof(struct node));
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
		current= newnode;
	}
}
struct node *ptr= NULL;
void insertat(int position, int number)
{
	int count=0;
	ptr=head;
	while(ptr!=NULL)
	{
		count+=1;
		if(count==position)
		{
			struct node *newnode= (struct node*)malloc(sizeof(struct node));
			newnode->data=number;
			newnode->next=ptr->next;
			ptr->next= newnode;			
		}
		ptr=ptr->next;
	}
}
void display()
{
	struct node *show;
	show=head;
	while(show!=NULL)
	{
		cout<<show->data<<" ";
		show= show->next;
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		insert(a[i]);
	}
	int p,num;
	cin>>num>>p;
	insertat(p,num);
	display();
	return 0;
}
