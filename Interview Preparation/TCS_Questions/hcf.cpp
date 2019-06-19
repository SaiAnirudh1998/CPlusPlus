//This is a c++ program to find HCF of 2 numbers
#include<bits/stdc++.h>
using namespace std;
int hcf(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return hcf(b,a%b);
	}
}
int main()
{
	int a,b;
	cout<<"Enter two numbers";
	cin>>a>>b;
	cout<<hcf(a,b);
}
