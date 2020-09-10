#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insert(int dataval)
{
	struct node *newnode= (struct node*)malloc(sizeof(struct node));
	struct node *current;
	newnode->data= dataval;
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
void sort()
{
	struct node *ptr1, *ctr;
	ptr1=head;
	int temp=0;
	while(ptr1!=NULL)
	{
		ctr=ptr1->next;
		while(ctr!=NULL){
		if(ptr1->data>ctr->data)
		{
			temp=ptr1->data;
			ptr1->data=ctr->data;
			ctr->data=temp;
		}
		ctr=ctr->next;
	}
	cout<<ptr1->data<<" ";
	ptr1=ptr1->next;
	}
}
void search(int num)
{
	int flag=0,a;
	struct node *pt=NULL;
	pt=head;
	while(pt!=NULL)
	{
		if(pt->data==num)
		{
			flag=1;
			a= pt->data;
		}
		pt=pt->next;
	}
	if(flag==1)
	{
		cout<<"The data is found at : "<<a<<endl;
	}
	else
	{
		cout<<"The data is not found at any location "<<endl;
	}
}
void midpoint()
{
	struct node *str, *p;
	p= head;
	str=p;
	while(str!=NULL)
	{
		p=p->next;
		str=str->next->next;
	}
	cout<<p->data<<endl;
}
int main()
{
	insert(140);
	insert(29);
	insert(288);
	insert(12);
	insert(2);
	insert(122);
	midpoint();
	//search(212);
	//sort();
	return 0;
}
