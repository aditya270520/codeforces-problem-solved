#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

int main()
{
long long int x,y,n,i,j;
cin>>n;
for(i=1;i<=n;i++)
{
scanf("%lld",&x);
y=sqrt(x);
for(j=2;j*j<y;j++)
if(x%j==0) break;
if(j*j>y&&y*y==x&&x>1) 
cout<<"YES";
else 
cout<<"NO";
cout<<endl;
}
}