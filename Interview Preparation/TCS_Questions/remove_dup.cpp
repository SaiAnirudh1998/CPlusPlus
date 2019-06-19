//Program to remove duplicates
#include<bits/stdc++.h>
using namespace std;
void remove(string a)
{
	int hash[256]={0};
	string b;
	int n=a.length();
	int j;
	for(int i=0;i<n;i++)
	{
		if(hash[a[i]]==0)
		{
			hash[a[i]]++;
			b[j++]=a[i];
		}
	}
	int k=b.length();
	for(int i=0;i<b[i];i++)
	cout<<b[i];
}
int main()
{
	string a="bhavanaanirudh";
	remove(a);
	return 0;
}
