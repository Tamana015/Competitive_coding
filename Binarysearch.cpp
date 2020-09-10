#include<iostream>
using namespace std;
int main()
{
	int a[11]={1,3,4,55,66,77,88,89,223,334,556};
	int last=11,first=0,mid=0;
	mid= (last+first)/2;
	int key=88;
	if(a[mid]==key)
	{
		cout<<"The element "<<key<<" is found at:"<< mid+1;
	}
	else if(key>a[mid])
	{
		first=mid+1;
		last=last;
		for(int i=first;i<last;i++)
		{
			if(a[i]==key)
			{
				cout<<"The element "<<a[i]<<" is found at:"<<i+1;
			}
		}
	}
	else if(key<a[mid])
	{
		first=first;
		last=mid-1;
		for(int i=first;i<last;i++)
		{
			if(a[i]==key)
			{
				cout<<"The element "<<a[i]<<" is found at:"<<i+1;
			}
		}
	}
	return 0;
}
