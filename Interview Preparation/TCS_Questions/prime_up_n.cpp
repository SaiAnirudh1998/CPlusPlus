//This is the most efficient program to print all primes upto n
#include<bits/stdc++.h>
using namespace std;
#define COUNT 256
void prime(int anirudh)
{
	bool hash[COUNT];
	memset(hash,true,sizeof(hash));
	int n=anirudh;
	for(int i=2;i*i<=n;i++)
	{
		if(hash[i]==true)
		{
			for(int j=i*i;j<n;j=j+i)
			{
				hash[j]=false;
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(hash[i])
		{
			cout<<i<<" ";
		}
	}
}
int main()
{
	int anirudh;
	cin>>anirudh;
	prime(anirudh);
	return 0;
}
