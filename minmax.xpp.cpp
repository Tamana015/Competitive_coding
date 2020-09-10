#include<iostream>
using namespace std;
int main()
{
	int a[11]={8,4,3,5,3,6,8,33,6,44,32};
	int mid=0,l=11,f=0;
	mid = (l+f)/2;
	int min=0,max=0;
	if(l==1)
	{
		min=a[0];
		max=a[0];
	}
	else if(l==2)
	{
		if(a[0]>a[1])
		{
			max=a[0];
			min=a[1];
		}
		else
		{
			max=a[1];
			min=a[0];
		}
	}
	else
	{
		for(int i=0;i<l;i++)
		{
			if(a[i]<max)
			{
				max= a[i];
			}
		}
		cout<<min<<" "<<max<<endl;
	}
	return 0;
}
