#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
	int data;
	struct node *edge;
	struct node *next;
};
struct node1
{
	int data1;
	struct node1 *next1;
};
struct node *head=NULL;
void insert(int data)
{
	struct node *newnode= (struct node*)malloc(sizeof(struct node));
	struct node *current=NULL;
	newnode->data=data;
	newnode->edge=NULL;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		current=newnode;
	}
	else
	{
		current->next= newnode;
			int n;
	char a;
	cout<<"enter y if enter in egee"<<endl;
	int p[n];
	cin>>a;
	if(a=='y')
	{
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>p[i];
			struct node1 *new_node = (struct node1*)malloc(sizeof(struct node1));
			struct node1 *current1;
			a= current->edge;
			new_node->data1= p[i];
			new_node->next1= NULL;
			if(a==NULL)
			{
				current->edge=new_node;
				current1= new_node;
			}
			else
			{
				current1->next1=new_node;
				current1= new_node;
			}
		
	}
		current= newnode;
	}
}

    }
int main()
{
	return 0;
}
