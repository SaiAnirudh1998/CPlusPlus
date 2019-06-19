#include <bits/stdc++.h> 
using namespace std;

int arr[1000000];
int binarySearch(int n, int x) 
{ 

    int l = 0, r = n-1;
    int m = l + (r-l) / 2;

	while (l <= r) { 
		int m = l + (r - l) / 2; 

		// Check if x is present at mid 
		if (arr[m] == x) 
			return 1; 

		// If x greater, ignore left half 
		if (arr[m] < x) 
			l = m + 1; 

		// If x is smaller, ignore right half 
		else
			r = m - 1; 
	} 

	// if we reach here, then element was 
	// not present 
	return -1; 
} 

int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){

        int n, k;
        cin >> n >> k;
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
      
        cout << binarySearch(n, k) << endl;

    }

	return 0; 
} 