/**
 *    Author:  Akira
 *    Created: 05.06.2023 23:00:46
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
ll d[300005];
map<pair<int, int>, int> cnt;
ll gcd(ll a, ll b) {
	if(b == 0) return a + b;
	return gcd(b, a % b);
}
void solve() {
	ll n, k; cin >> n >> k;
	for(int i = 1; i <= n; i++) {
		for(int j = i; j <= n; j += i) ++d[j];
	}
	for(ll x = 1; x <= n; x++) {
		ll g = gcd(k * d[x], x);
		++cnt[{k * d[x] / g, x / g}];
	}
	ll ans = 0;
	for(ll y = 1; y <= n; y++) {
		if(k * d[y] * d[y] == y * y) ans++;
		ll g = gcd(y, d[y]);
		ans += cnt[{y / g, d[y] / g}];
	}	
	cout << ans / 2;		
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	freopen("divi.inp", "r", stdin);
	freopen("divi.out", "w", stdout);
	solve();
	return 0;
}
