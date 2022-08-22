#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin>>testcase;
    while(testcase--) {
       int n;
       cin>>n;
       int arr[n];
       for(int i=0; i<n; i++) 
       cin>>arr[i];
       sort(arr, arr+n);
       
       int ans = arr[n-1] - arr[0] + arr[n-2] - arr[1];
       cout<<ans<<endl;
    }
    return 0;
}
