#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin>>testcase;
    while(testcase--) {
        ll n, m;
        cin >> n >> m;
        if (n % 2 == m % 2)
        {
            cout << "Tonya" << endl;
        }
        else
        {
            cout << "Burenka" << endl;
        }
    
    }
    return 0;
}
