#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

int main(){
	int tt;
	cin>>tt;
	while(tt--){
		int n,m;
		cin>>m>>n;
		cout<<1ll*(m*m+m+n-1)*n/2<<endl;
	}
	return 0;
}