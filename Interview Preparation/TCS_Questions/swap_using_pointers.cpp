//This is a program to swap 2 numbers using pointer
#include<bits/stdc++.h>
using namespace std;
int swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a;
	int b;
	cout<<"Enter the numbers to be swaped";
	cin>>a>>b;
	swap(&a,&b);
	cout<<a<<b;
	return 0;
}
