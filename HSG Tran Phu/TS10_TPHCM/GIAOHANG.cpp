// author : Tran Gia Huy
#include "bits/stdc++.h"
using namespace std;

#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define p64 pair<long long, long long>
#define p32 pair<int, int>
#define ll long long
#define ull unsigned long long
#define ldb long double
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;
                         
void solve() {
    ll n, m; cin >> n >> m;
	vector<p64> a;
	for(int i = 1; i <= n; i++) {
		ll x, y; cin >> x >> y;
		if(x > y) a.pb({y, x}); // a[pair] = (giao hang.fi, lay hang.se)
	}
	sort(all(a));
	if(sz(a) == 0) { // Truong hop co so
		cout << m << endl;
		return;
	}
	ll l = a[0].fi;
	ll r = a[0].se;
	ll ans = m;
	for(int i = 0; i < sz(a); i++) {
		if(a[i].fi <= r) { // Co the gom hang roi giao 1 lan (*)
			r = max(r, a[i].se);
		}
		else { // Lay hang va giao hang luon
			ans += 2 * (r - l);
			l = a[i].fi;
			r = a[i].se;
		}
	}
	ans += 2 * (r - l); // (*)
	cout << ans;
}

int main() {
	fastIO
	//freopen("input.inp", "r", stdin);
	//freopen("output.out", "w", stdout);
	int t = 1; //cin >> t;
	while(t--) solve();
	cerr << "Times: " << TIME << "s." << endl;
	return 0;
}