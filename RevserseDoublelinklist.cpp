#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
struct node *head,*current=NULL;
void insert(int val)
{
	struct node *newnode= (struct node*)malloc(sizeof(struct node)); 
	newnode->data=val;
	newnode->prev=NULL;
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
		current= newnode;
	}
}
void display()
{
	struct node *ptr;
	ptr= current;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->prev;
	}
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int N;
		cin>>N;
		int a[N];
		for(int j=0;j<N;j++)
		{
			cin>>a[j];
			insert(a[j]);
		}
	display();
}
	return 0;
}
