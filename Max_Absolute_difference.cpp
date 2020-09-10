#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=0,k;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			k= abs(abs(a[i]-a[j])+abs(i-j));
			if(max<k)
			{
				max=k;
			}
		}
	}
	cout<<max<<endl;
	return 0;
}
