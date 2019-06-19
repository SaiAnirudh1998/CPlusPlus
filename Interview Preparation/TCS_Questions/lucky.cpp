//This is the program to find lucky number
#include<bits/stdc++.h>
using namespace std;
void lucky(int n,int count)
{
	if(count>n)
	{
		cout<<"Lucky";
		return;
	}
	else if(n%count==0)
	{
		cout<<"Not lucky";
		return;
	}
	else
	{
		n=n-n/count;
		lucky(n,count);
	}
}
int main()
{
	int n,count;
	cin>>n>>count;
	lucky(n,count);
	return 0;
}
