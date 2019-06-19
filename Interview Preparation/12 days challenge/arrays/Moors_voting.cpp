#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        int count = 0;
        for(auto i:m)
        {
            if(i.second>n/2)
            {
                cout<<i.first<<endl;
                count = 1;
                break;
            }
        }
        if(count==0)
        {
            cout<<"-1"<<endl;
        }
    }
}
