#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int stack[10],top=-1,stack1[10],top1=-1;
	int a[3][3]={{1,0,1},{1,1,1},{1,0,1}};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(a[i][j]==0)
			{
				top=top+1;
				top1=top1+1;
				stack[top]=i;
				stack1[top1]=j;
			}
		}
	}
	while(top!=-1 || top1!=-1)
	{
	for(int j=0;j<3;j++)
		{
			a[stack[top]][j]=0;
		}
	for(int i=0;i<3;i++)
	{
			a[i][stack1[top1]]=0;
	}
	top=top-1;
	top1=top1-1;
   }
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
