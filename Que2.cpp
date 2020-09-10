#include<iostream>
using namespace std;
int main()
{
  int n=3,m=2;
  int a[n][m];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin>>a[i][j];
    }
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(a[i][j]>13)
      {
      	a[i][j]=0;
      	cout<<a[i][j]<<" ";
      }
      else
      {
      cout<<a[i][j]<<" ";
    }
   }
    cout<<endl;
  }
  
  return 0;
}
