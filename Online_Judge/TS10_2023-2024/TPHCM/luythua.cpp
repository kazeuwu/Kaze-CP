/**
 *    Author:  Akira
 *    Created: 07.06.2023 23:29:13
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
ll binpow(ll a, ll n) {
	ll res = 1;
	while(n) {
		if(n & 1) res *= a;
		a *= a;
		n >>= 1;
	}
	return res;
}
void solve() {
	ll n; cin >> n;
	ll res = 0;
	int num[n];
	int exponent[n];
	for(int i = 0; i < n; i++) {
		cin >> num[i];
		exponent[i] = num[i] % 10;
	}
	for(int i = 0; i < n; i++) {
		num[i] = (num[i] - (num[i] % 10)) / 10;
	}
	for(int i = 0; i < n; i++) {
		res += binpow(num[i], exponent[i]);
	}
	cout << res;
}

int main() {
	//freopen("LUYTHUA.INP", "r", stdin);
	//freopen("LUYTHUA.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
