/**
 *    Author:  Akira
 *    Created: 04.06.2023 23:53:20
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

ll sumdivisor(ll x) {
	ll sum = 0;
	for(int i = 1; i <= sqrt(x); i++) {
		if(x % i == 0) {
			if(i != x / i) {
				sum += i + x / i;
			}
			else sum += i;
		}
	}
	return sum;
}
void solve() {
	ll n; cin >> n;
	cout << sumdivisor(n);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
