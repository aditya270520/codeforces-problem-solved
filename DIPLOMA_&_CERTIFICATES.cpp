#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i, n , k;
    cin>>n>>k;
    i=(n/2)/(k+1);
    cout<<i<<" "<<i*k<<" "<<n-i-(i*k);
	
}
