//This is the program to find lcm of two numbers
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}
int lcm(int a,int b)
{
	return (a*b)/gcd(a,b);
}
int main()
{
	int a,b;
	cout<<"Enter the 2 numbers"<<endl;
	cin>>a>>b;
	cout<<lcm(a,b);
}
