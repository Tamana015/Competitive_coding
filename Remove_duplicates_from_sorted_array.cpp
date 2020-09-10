#include<iostream>
using namespace std;
int main()
{
	int a[10]={1,1,1,2,3,4,7,8,8,8};
	int b[10]={0};
	for(int i=1;i<10;i++)
	{
		b[a[i]]+=1;
	}
	for(int i=1;i<10;i++)
	{
		if(b[i]!=0){
			cout<<i<<" ";
		}
	}
	
	return 0;
}
