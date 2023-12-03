/**
 *    author:  akira
 *    created: 30/05/2023 23:49:26
**/
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ldb;
typedef unsigned long long ull;
using namespace std;

// Problem B
void solve() {
	ll n; cin >> n;
	ll cnt = 0;
	for(ll i = 1; i <= sqrt(n); i++) {
		if(n % i == 0) {
			if(i * i != n) {
	 			cnt += 2;
			}
			else ++cnt;
		}	
   }
    cout << cnt;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}