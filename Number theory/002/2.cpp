/**
 *    Author:  Akira
 *    Created: 05.06.2023 00:19:22
**/
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
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

ll euler(ll x) {
	ll res = x;
	for(int i = 2; i <= sqrt(x); i++) {
		if(x % i == 0) {
			while(x % i == 0) {
				x /= i;
			}
			res -= res / i;
		}
	}
	if(x != 1) res -= res / x;
	return res;
}
void solve() {
	ll n; cin >> n;
	cout << euler(n);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
