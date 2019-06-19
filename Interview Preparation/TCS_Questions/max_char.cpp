//This is the program to find the maximum occuring character in the string 
#include<bits/stdc++.h>
using namespace std;
#define COUNT 256
void maxi(string ani)
{
	int hash[COUNT]={0};
	int max=0;
	char maxi;
	int n=ani.length();
	for(int i=0;i<n;i++)
	{
		hash[ani[i]]++;
		if(max<hash[ani[i]])
		{
			max=hash[ani[i]];
			maxi=ani[i];
		}
	}
	cout<<maxi;
}
int main()
{
	string ani;
	getline(cin,ani);
	maxi(ani);
	return 0;
}
