/**
 *    author:  akira
 *    created: 30/05/2023 19:45:53
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
typedef unsigned long long ull;
using namespace std;

// Problem D
const ll MAX = 10000000;
bool sieve[MAX + 1];
void SieveOfAtkin(ll limit) {
	for(ll i = 0; i <= limit; i++) {
		sieve[i] = false;
	}
	if(limit > 2) sieve[2] = true;
	if(limit > 3) sieve[3] = true;
	for(ll x = 1; x * x <= limit; x++) {
		for(ll y = 1; y * y <= limit; y++) {
			ll n = (4 * x * x) + (y * y);
			if(n <= limit && (n % 12 == 1 || n % 12 == 5)) {
				sieve[n] ^= true;
			}
			n = (3 * x * x) + (y * y);
			if(n <= limit && n % 12 == 7) {
				sieve[n] ^= true;
			}
			n = (3 * x * x) - (y * y);
			if(n <= limit && (x > y) && n % 12 == 11) {
				sieve[n] ^= true;
			}	
		}
	}
	for(ll r = 5; r * r <= limit; r++) {                         
		if(sieve[r]) {
			for(ll i = r * r; i <= limit; i += r * r) {
				sieve[i] = false;
			}
		}
	}
}
void solve() {
	ll n; cin >> n;
	ll ans = 0;
	for(ll i = n + 1; i < 2 * n; i++) {
		ans += (int)sieve[i];
	}
	cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    SieveOfAtkin(MAX);
    int t; cin >> t;
    while(t--) {
    	solve();	
    }
    return 0;
}