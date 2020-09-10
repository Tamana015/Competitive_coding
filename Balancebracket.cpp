#include<iostream>
#include <stdio.h>
#include <cstdlib>
#include <algorithm>
#include <stack>
#include <conio.h>
using namespace std;
 int main()
 {
 	int stack[10],top=-1;
 	string a="{[(){}]}";
 	int n = a.length();
 	for(int i=0;i<n;i++)
 	{
 		if(a[i]=="[" || a[i]== "{" || a[i]=="(")
 		{
 			top=top+1;
 			stack[top]=a[i];
 		}
 		else if(a[i]==")" && stack[top]=="(")
 		{
 			stack[top]=0;
 			top=top-1;
 		}
 		else if(a[i]=="}" && stack[top]=="{")
 		{
 			stack[top]=0;
 			top=top-1;
 		}
 		else if(a[i]=="]" && stack[top]=="[")
 		{
 			stack[top]=0;
 			top=top-1;
 		}
 	}
 	cout<<top<<endl;
 	return 0;
 }
