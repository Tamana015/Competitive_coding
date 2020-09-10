#include<iostream>
#include <stdio.h>
#include <cstdlib>
#include <algorithm>
#include <stack>
#include <conio.h>
#include<cstdlib>
using namespace std;
struct node
{
	int data;
	 struct node *left;
	 struct node *right;
};
struct node *head, *current=NULL;
void insert(int val, char w)
{
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->left=NULL;
	newnode->right=NULL;
	if(head=NULL)
	{
		head=newnode;
		current=newnode;
	}
	else
	{
		if(w == "L" || w =="l")
		{
			current->left=newnode;
			current= newnode;
		}
		else if(w=="R" || w== "r")
		{
			current->right=newnode;
			current= newnode;
		}
	}
}
int main()
{
	insert(20,"l");
	insert(10,"r");
	insert(30,"l");
	return 0;
}
