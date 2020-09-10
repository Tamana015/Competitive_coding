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

int main()
{
	int a2[7]={7,8,5,1,2,3,1};
	for(int i=0;i<6;i++)
	{
		insert1(a2[i]);
	}
	
}
