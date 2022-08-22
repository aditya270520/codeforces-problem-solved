#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

int main(){
    string s;int l=0, u=0;cin>>s;
    for(char c : s) (isupper(c) ? u:l)++;
    for(char c : s) cout<< char((u>l) ? toupper(c) : tolower(c));
}
