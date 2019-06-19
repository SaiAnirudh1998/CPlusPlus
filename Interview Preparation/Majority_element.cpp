//This is the code to find the majority element using the linear search
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[] = {1,1,1,2,3,43,1,1,1,1};
	int n = sizeof(a)/sizeof(a[0]);
	sort(a,a+n);
	if(a[0]==a[n/2+1])
	{
		cout<<"This is the majority element"<<a[0];
	}
}
