#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

int n,arr[1000003],i,x=1,m,t;
int main(){
cin>>n;
for(i=1;i<=n;i++){
    cin>>t;
    while(t--)
    arr[x]=i,x++;}
cin>>m;
while(m--)cin>>t,cout<<arr[t]<<endl;
}
