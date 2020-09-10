#include<iostream>
using namespace std;
int main()
{
	int A[3]={1,5,8};
	int B[2]={10,19};
	int k[5],n=3;
	for (int i=0;i<3;i++)
	{
		k[i]=A[i];
	}
	int i=0;
	for(int j=n;j<n+2;j++)
	{
		k[j]=B[i];
		i++;
	}
	for(int i=0;i<5;i++)
	{
		cout<<k[i]<<" ";
	}
	return 0;
}
