//This is the program to print fibbonasi series
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number till which you would like to print the fibbonasi series";
	cin>>n;
	int a=1,b=1,c;
	cout<<a<<" ";
	for(int i;i<n-1;i++)
	{
		cout<<b<<" ";
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
