//This is the program to find the sum of the digits of a number
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,temp,rem;
	int sum=0;
	cin>>n;
	temp=n;
	while(temp)
	{
		rem=temp%10;
		sum+=rem;
		temp/=10;
	}
	cout<<sum;
}
