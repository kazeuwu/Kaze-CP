/**
 *    Author:  Akira
 *    Created: 07.06.2023 23:49:25
**/
#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define fi first
#define se second
#define llll pair<long long, long long>
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
	ll n, m; cin >> n >> m;
	vector<llll> a;
	for(int i = 1; i <= n; i++) {
		ll x, y; cin >> x >> y;
		if(x > y) a.pb({y, x});
	}
	sort(all(a));
	if(sz(a) == 0) {
		cout << m << endl;
		return;
	}
	ll l = a[0].fi;
	ll r = a[0].se;
	ll ans = m;
	for(int i = 0; i < sz(a); i++) {
		if(a[i].fi <= r) {
			r = max(r, a[i].se);
		}
		else {
			ans += 2 * (r - l);
			l = a[i].fi;
			r = a[i].se;
		}
	}
	ans += 2 * (r - l);
	cout << ans; 
}

int main() {
	//freopen("GIAOHANG.INP", "r", stdin);                                                                                                
	//freopen("GIAOHANG.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
