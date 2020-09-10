#include<iostream>
using namespace std;
void checkpalin(int num)
{
	int k= num;
	int rem=0,a=0;
	while(num>0){
	rem=num%10;
	a=(10*a)+rem;
	num= num/10;
	}
	if(k==a)
	{
		cout<<"Yes "<<k<<" it Palindrome"<<endl;
	}
	else
	{
		cout<<"No "<<k<<" it is not palindrome"<<endl;
	}
}
int main()
{
	checkpalin(129021);
	return 0;
}
