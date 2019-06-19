//This is the program to check a prime number
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number";
	cin>>n;
	int i,k;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			k++;	
		}
	}
	if(k==0)
	{
		cout<<"prime number";
	}
	else
	{
		cout<<"Not a prime";
	}
}
