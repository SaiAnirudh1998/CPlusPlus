//This is the code for the armstrong number
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number to be checked";
	cin>>n;
	int arm;
	arm=n;
	int i,t;
	while(n)
	{
		i=n%10;
		t=t+(i*i*i);
		n=n/10;
	}
	if(arm==t)
	{
		cout<<"These are armstrong numbers";
	}
	else
	{
		cout<<"These are not armstrong numbers";
	}
}
