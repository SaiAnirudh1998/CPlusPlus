#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,i;
        cin>>n>>x;
        int arr[n];
        for(i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        for(i=1;i<=n;i++)
        {
            if(arr[i]==x)
            {
                cout<<i<<endl;
                break;
            }
        }
        if(i==n+1)
        {
            cout<<"-1"<<endl;
        }
    }
}