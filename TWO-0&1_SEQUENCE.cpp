#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        int i=n-1,j=m-1;
        while(i>=0&&j>=0&&a[i]==b[j] ){
            i--,j--;
        }
        if(j>0){
            cout<<"NO\n";
        }
        else if(j<0)cout<<"YES\n";
        else{
            if(j==0){
                int g=0;
                while(i>=0){
                    if(a[i]==b[j]){
                // cout<<i<<" "<<j<<" ";

                    g=1;
                }
                i--;
                }
                if(g==0)cout<<"NO\n";
                else cout<<"YES\n";
            }
        }
	}
	return 0;
}