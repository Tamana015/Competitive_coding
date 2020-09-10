#include<iostream>
using namespace std;
int main()
{
	int a[9]={-2, 1, -3, 4, -1, 2, 1, -5, 4};
	int max=0;
	for(int i=0;i<9;i++)
	{
		int k=a[i];
		for(int j=i+1;j<9;j++)
		{
			k+=a[j];
			if(max<k)
			{
				max=k;
			}
		}
		k=0;
	}
	cout<<max<<endl;
	return 0;
}
