//This is a program to swap 2 numbers
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the numbers to be swaped";
	cin>>a>>b;
	int c;
	c=b;
	b=a;
	a=c;
	cout<<"The numbers after being swaped";
	cout<<a<<b;
}
