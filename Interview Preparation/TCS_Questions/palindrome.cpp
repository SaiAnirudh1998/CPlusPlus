#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,reverse=0,reminder,temp;
	cin>>n;
	temp=n;
	while(temp)
	{
		reminder=temp%10;
		reverse=reverse*10+reminder;
		temp=temp/10;
	}
	if(n==reverse)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"No";
	}
}
