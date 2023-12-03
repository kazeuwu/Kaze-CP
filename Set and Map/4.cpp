/**
 *    Author:  Akira
 *    Created: 14.06.2023 14:29:25
**/
#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define fi first
#define se second
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) x / __gcd(x, y) * y
typedef long long ll;
typedef long double ldb;
using namespace std;
/**------Ideas---------
---------------------**/
const ldb PI = 3.14159265358979323846264338327950288419716939937510582097494459230;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;
void solve() {
	int t; cin >> t;
	while(t--) {
		ll n; cin >> n;
		ll a[n];
		map<ll, int> mp;
		for(ll i = 0; i < n; i++) {
			ll x; cin >> x;
			++mp[x];
		}
		ll res, fre = -1;
		for(auto it : mp) {
			if(it.se > fre) {
				fre = it.se;
				res = it.fi;
			}
		}
		cout << res << " " << fre << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
