#include<iostream>
using namespace std;
int main()
{
	string a[5]={"FooBar","FooBarTest","FootBall","FrameBuffer","ForceFeedBack"};
	string pattern="FB";
	char queue[100];
	int rear=0,font=0;
	for (int i=0;i<5;i++)
	{
		int n = a[i].length();
		for (int j=0;j<n;j++)
		{
			if (a[i][j]== 'A' || a[i][j]=='B' || a[i][j]=='C' || a[i][j]=='F' || a[i][j]=='T')
			{
				queue[font]=a[i][j];
				font=font+1;
			
			}
		}
		int flag=0;
		for (int k=0;k<font;k++)
		{
			cout<<queue[k]<<" ";
			if(queue[k]=='F' && queue[k+1]!='B')
			{
				cout<<queue[k]<<" ";
				flag=1;
			}
			k=k+2;
		}
		cout<<endl;
		font=0;
	}
	return 0;
}
