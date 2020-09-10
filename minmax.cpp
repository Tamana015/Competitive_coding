#include<iostream>
using namespace std;
int main()
{
	int a[2]={8,4};
	int mid=0,l=2,f=0;
	mid = (l+f)/2;
	int min=1000,max=0;
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
			if(a[i]>max)
			{
				max= a[i];
			}
			else if(a[i]<min)
			{
				min=a[i];
			}
		}
	}
	cout<<min<<" "<<max<<endl;
	return 0;
}
