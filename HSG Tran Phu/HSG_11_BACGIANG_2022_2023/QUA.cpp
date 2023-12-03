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
/**
 * Sample input 1:
5
5 15
3 5
4 7
5 1
2 8
 * Sample input 2:
5
4 10
1 3
5 15
3 10
4 12
**/

#define maxn 500005
int n;              
vector<p32> a;
vector<int> b;      
ll bit[maxn], dp[maxn];
void update(int x, ll val) {
	for (; x < maxn; x += x & -x) bit[x] = max(bit[x], val);
}
ll get(int x) {
	ll ans = 0;
	for (; x; x -= x & -x) ans = max(ans, bit[x]);
	return ans; 
}
void solve() {
    cin >> n;
    a.emplace_back(0, 0);
    b.emplace_back(0);
    for (int i = 1; i <= n; i++) {
    	int x, y; cin >> x >> y;
    	a.emplace_back(x, y);
    	b.emplace_back(x);
    }	
    sort(all(b));
    unique(all(b));
    for (int i = 1; i <= n; i++) a[i].fi = lower_bound(all(b), a[i].fi) - b.begin();
    ll ans = 0;
	for (int i = 1; i <= n; i++) {
		ll x = get(a[i].fi - 1);
		dp[i] = x + a[i].se;
		ans = max(ans, dp[i]);
		update(a[i].fi, dp[i]);
	}
	cout << ans;

}

int main() {
	fastIO
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\input.inp", "r", stdin);
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\output.out", "w", stdout);
	int t = 1; //cin >> t;
	while(t--) solve();
	cerr << "Times: " << TIME << "s." << endl;
	return 0;
}