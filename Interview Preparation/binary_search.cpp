//This is the perform to perform binary search on an array
#include<bits/stdc++.h>
using namespace std;
void bin(int a[],int f,int l,int s)
{
	int mid = l/2;
	if(a[mid]==s)
	{
		cout<<mid<<"found";
		return;
	}
	else if(a[mid]>s)
	{
		bin(a,0,mid-1,s);
	}
	else if(a[mid]<s)
	{
		bin(a,mid+1,l,s);
	}
	cout<<"not found";
}
int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9};
	int n = sizeof(a)/sizeof(a[0]);
	int s = 5;
	bin(a,0,n-1,s);
	return 0;
}
