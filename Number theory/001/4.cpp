/**
 *    Author:  Akira
 *    Created: 04.06.2023 23:16:02
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

ll divisor(ll x) {
	ll cnt = 0;
	for(int i = 1; i <= sqrt(x); i++) {
		if(x % i == 0) {
			if(i != x / i) {
				cnt += 2;
			}
			else ++cnt;
		}
	}
	return cnt;
}
void solve() {
	ll n; cin >> n;
	cout << divisor(n);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
