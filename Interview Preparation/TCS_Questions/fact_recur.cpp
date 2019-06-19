//This is a program to find the factorial using the recursive method
#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
	static int i=1;
	if(n>0)
	{
		i=i*n;
		n--;
		fact(n);
	}
	else
	{
		return i;
	}
}
int main()
{
	int n;
	cout<<"Enter the number for which you would like to find the factorial";
	cin>>n;
	cout<<fact(n);
	return 0;
}
