//This is a program find the pairs in the array whose sum is equal to the given number
#include<bits/stdc++.h>
using namespace std;
void su(int a[],int n,int s)
{
	set<int> a1;
	int b;
	for(int i=0;i<n;i++)
	{
		a1.insert(a[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		b=s-a[i];
		if(a1.find(b)!=a1.end())
		{
			cout<<"("<<a[i]<<","<<b<<")";
		}
	}
}
int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9};
	int n = sizeof(a)/sizeof(a[0]);
	int s = 7;
	su(a,n,s);
	return 0;
}
