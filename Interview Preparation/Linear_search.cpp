//This is a program to search an element in a linear fashion
#include<bits/stdc++.h>
using namespace std;
void lin(int a[],int n,int f)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==f)
		{
			cout<<"Found "<<i;
			return;
		}
	}
	cout<<"Not Found";
}
int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9};
	int n = sizeof(a)/sizeof(a[0]);
	int f=8;
	lin(a,n,f);
	return 0;
}
