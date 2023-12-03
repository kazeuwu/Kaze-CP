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
#define maxn 200005

int n, q;
ll t[maxn * 4];   
     
ll get(int id, int l, int r, int u, int v) {
	if(v > n) v = n;
	if(u > r || v < l) return 0;
	if(l >= u && r <= v) return t[id];
	int mid = (l + r) >> 1;
	ll t1 = get(id * 2, l, mid, u, v);
	ll t2 = get(id * 2 + 1, mid + 1, r, u, v);
	return t1 + t2;
}
void update(int id, int l, int r, int pos, int val) {
	if(pos < l || pos > r) return;
	if(l == r) return void(t[id] = val);
	int mid = (l + r) >> 1;
	update(id * 2, l, mid, pos, val);
	update(id * 2 + 1, mid + 1, r, pos, val);
	t[id] = t[id * 2] + t[id * 2 + 1];
}
void solve() {
	cin >> n >> q;
	for(int i = 1; i <= n; i++) {
		int x; cin >> x;
		update(1, 1, n, i, x);
	}

	while(q--) {
		int query; cin >> query;
		if(query == 1) {
			int x, v; cin >> x >> v;
			update(1, 1, n, x, v);
		}
		else {
			int u, v; cin >> u >> v;
			cout << get(1, 1, n, u, v) << '\n';
		}
	}
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