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
    int n; cin >> n;
    int a[2 * n + 1];
    for (int i = 1; i <= 2 * n; i++) cin >> a[i];
    sort(a + 1, a + 2 * n + 1);
    vector<p32> v, ans, c;
	int x = 0, y = 0;
	for (int i = 1; i <= 2 * n; i++) {
		int res = INT_MAX;
		for (int j = i + 1; j <= 2 * n; j++) {
			res = min(res, abs(a[i] - a[j]));
			if (abs(a[i] - a[j]) <= res) {
				x = i;
				y = j;
				ans.emplace_back(x, y);
			}
		}
	}
	for (int i = 1; i < sz(ans); i++) {
		c.emplace_back(ans[i].fi, ans[i - 1].fi);
		c.emplace_back(ans[i].se, ans[i - 1].se);
	}
	int res = 0;
	for (int i = 1; i < sz(c); i++) {
		res += (abs(a[c[i].fi] - a[c[i - 1].fi]));
		res += (abs(a[c[i].se] - a[c[i - 1].se]));
	}
	for (int i = 0; i < sz(c); i++) cout << c[i].fi << " " << c[i].se << '\n';
	// cout << res << '\n';
	// for (int i = 0; i < sz(c); i++) {
	// 	cout << a[c[i].fi] << " " << a[c[i].se] << '\n';
	// }
	//for (int i = 0; i < sz(c); i++) cout << c[i].fi << " " << c[i].se << '\n';
	// int res = 0;
	// for (int i = 1; i < sz(ans); i++) {
	// 	res += abs(a[ans[i - 1].fi] - a[ans[i].fi]) + abs(a[ans[i - 1].se] - a[ans[i].se]);
	// }
	// cout << res;
}

int main() {
	fastIO
	freopen("input.inp", "r", stdin);
	freopen("output.out", "w", stdout);
	int t; cin >> t;
	while(t--) solve();
	cerr << "Times: " << TIME << "s." << endl;
	return 0;
}