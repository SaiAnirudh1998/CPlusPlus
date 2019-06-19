//Program to check 2 strings are rotation are not
#include<bits/stdc++.h>
using namespace std;
void check(string a,string b)
{
	int l1=a.length();
	int l2=b.length();
	if(l1!=l2)
	{
		cout<<"No";
		return;
	}
	string c=a+a;
	cout<<c;
	if(c.find(b)!=string::npos)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"No";
	}
	
}
int main()
{
	string a = "man";
	string b = "anm";
	check(a,b);
	return 0;
}
