//This the program to check a string is palandrome or not
#include<bits/stdc++.h>
using namespace std;
#define COUNT 256
void ispalan(string bhavana)
{
	int hash[COUNT];
	int i;
	int n=bhavana.length()-1;
	while(n>i)
	{
		if(hash[bhavana[i++]]!=hash[bhavana[n--]])
		{
			cout<<"Not palandrome";
			return;
		}
	}
	cout<<"Palandrome";
}
int main()
{
	string bhavana;
	getline(cin,bhavana);
	ispalan(bhavana);
	return 0;
}
