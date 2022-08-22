#include <bits/stdc++.h>
using namespace std;

int ax[]={1,0,0,-1,1,-1,1,-1}; 
int ay[]={0,-1,1,0,1,-1,-1,1};  

void aditya(){ 
    int n,m; 
    cin>>n>>m; 

    vector<string> a(n); 
    for(int i =0;i<n;i++){ 
        cin>>a[i]; 
    } 
    int value(0); 
    int cnt1(0),cnt2(0);

    for(int i=0;i<n;i++)
    { 
        for(int j=0;j<m;j++)
        { 
            if(a[i][j]=='0')
            { 
                cnt1++; 
                for(int k=0;k<8;k++)
                { 
                    int nx=i+ax[k]; 
                    int ny=j+ay[k]; 

                    if(nx<n && nx>=0 && ny>=0 && ny<m && a[nx][ny]=='0') 
                        cnt2++; 
                    
                }
            } 
            else 
                value++; 
             
        } 
    }
     

    if(cnt2) 
        cout<<value<<endl; 
    else if(cnt1) 
        cout<<value-1<<endl; 
    else 
        cout<<value-2<<endl; 
     

}
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin>> testcase;
    while(testcase--){
        aditya();
 
    }
    // your code goes here
	return 0;
}