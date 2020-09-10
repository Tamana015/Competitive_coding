#include<iostream>
using namespace std;
int main()
{
	int stack[10],top=-1,a[10]={1,2,3,4,5,6,7,8,9,10};
	for(int i=0;i<10;i++)
	{
		if(a[i]%2!=0)
		{
			top=top+1;
			stack[top]=a[i];
		}
	}
	while(top!=-1)
	{
		cout<<stack[top]<<" ";
		top=top-1;
	}
	return 0;
}
