#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	//cout<<"Enter the number of test cases";
	cin>>t;
	while(t--)
	{
		long long int n,x;
		//cout<<"Enter the number of digits";
		cin>>n;
		//cout<<"Enter the sum to be checked";
		cin>>x;
		long long int arr[n];
		set<int> s;
		//cout<<"Enter the elements in the array";
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			
		}
		int count=0;
		for(int i=0;i<n;i++)
		{
			int temp = x-arr[i];
			if(s.find(temp)!=s.end())
			{
				cout<<"Yes"<<endl;
				count++;
				break;
			}
			s.insert(arr[i]);
		}
		if(count==0)
		{
		    cout<<"No"<<endl;
		}
	}
}