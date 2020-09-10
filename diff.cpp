#include<iostream>
using namespace std;
int main()
{
	int a[3]={1,3,5};
	int k=4,flag=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if((a[i]-a[j])==k)
			{
				flag=1;
			}
		}
	}
	if(flag==1)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}
