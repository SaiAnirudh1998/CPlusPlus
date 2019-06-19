//This is a program to print factorial of a number
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number for which you would like to find the factorial";
	cin>>n;
	int fact=1;
	while(n)
	{
		fact=fact*n;
		n--;
	}
	cout<<fact;
}
