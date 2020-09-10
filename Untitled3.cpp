#include<iostream>
using namespace std;
int main()
{
	int font=0,rear=0,queue[10],a[10]={1,2,3,4,5,6,7,8,9,10};
	for(int i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			queue[rear]=a[i];
			rear= rear+1;
		}
	}
	while(font!=rear)
	{
		queue[font]=0;
		font=font+1;
		cout<<font<<" ";
	}
	return 0;
}
