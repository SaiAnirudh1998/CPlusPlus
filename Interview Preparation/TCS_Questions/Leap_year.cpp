//This is a program to check a number is leap year or not
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number";
	cin>>n;
	if(((n%100!=0)&&(n%4==0))||(n%400==0))
	{
		cout<<"leap Year";
	}
	else
	{
		cout<<"Not a leap year";
	}
}
