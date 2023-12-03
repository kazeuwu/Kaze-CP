/**
 *    Author:  Akira
 *    Created: 05.06.2023 15:33:46
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
void fibo(ll n) {
	bool ok = false;
	ll f[93];
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i < 93; i++) {
		f[i] = f[i - 1] + f[i - 2];
	}
	for(int i = 0; i < 93; i++) {
		if(f[i] == n) ok = true;
	}
	if(ok) cout << "YES";
	else cout << "NO";
}
void solve() {
	int t; cin >> t;
	while(t--) {
		ll n; cin >> n;
		fibo(n);
		cout << endl;	
	}
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
