#include<bits/stdc++.h>
using namespace std;
void pairs(int arr[],int k,int n)
{
	set<int> a1;
    for(int i=0; i<n; i++){
        a1.insert(arr[i]);
    }
    int pairCount = 0;
    for(int i=0; i<n; i++){
        int diff=arr[i]-k;
        if(a1.find(diff)!=a1.end()){
            pairCount++;
            cout<<"i"<<i<<endl;
        }
    }
    cout<<"Pairs"<<pairCount;
}
int main()
{
	int arr[] = {1,5,3,4,2};
	int k = 2;
	int n = 5;
	pairs(arr,k,n);
}
