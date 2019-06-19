//This is the program to find the greatest of 3 numbers
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,largest;
	cin>>a>>b>>c;
	largest = (a>b)?((a>c?a:c)) : ((b>c)?b:c);
	cout<<largest;
}
