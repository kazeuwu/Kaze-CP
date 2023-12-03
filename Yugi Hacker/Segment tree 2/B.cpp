// author : Tran Gia Huy
#include "bits/stdc++.h"
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define pf push_front
#define eb emplace_back
#define fi first
#define se second
#define p64 pair<long long, long long>
#define p32 pair<int, int>
#define ll long long
#define ull unsigned long long
#define ldb long double
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define maxn 200005

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923, EPS = 1e-6;
const ll INF = 1e18, MOD = 1e9 + 7, MOD2 = 1e9 + 9;

int n, q;
ll t[maxn << 2], lazy[maxn << 2];
void push(int id) {
	if (lazy[id]) {
		t[id << 1] += lazy[id];
		t[id << 1 | 1] += lazy[id];
		lazy[id << 1] += lazy[id];
		lazy[id << 1 | 1] += lazy[id];
		lazy[id] = 0;
	}
}
ll get(int id, int l, int r, int u, int v) {
	if (u > r || v < l) return 1e15;
	if (l >= u && r <= v) return t[id];
	int mid = (l + r) >> 1;
	push(id);
	return min(get(id << 1, l, mid, u, v), get(id << 1 | 1, mid + 1, r, u, v));
}
void update(int id, int l, int r, int u, int v, int x) {
	if (l > v || r < u) return;
	if (l >= u && r <= v) {
		t[id] += x;
		lazy[id] += x;
		return;
	}
	int mid = (l + r) >> 1;
	push(id);
	update(id << 1, l, mid, u, v, x);
	update(id << 1 | 1, mid + 1, r, u, v, x);
	t[id] = min(t[id << 1], t[id << 1 | 1]);
}
void OnePunchAC() {
	cin >> n >> q;
	for (int i = 1; i <= n; i++) {
		int x; cin >> x;
		update(1, 1, n, i, i, x);
	}
	while(q--) {
		int query, l, r, x; cin >> query >> l >> r;
		if (query == 1) {
			cin >> x;
			update(1, 1, n, l, r, x);
		} else {
			cout << get(1, 1, n, l, r) << '\n';
		}
	}
}
 
int main() {
	fastIO
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\input.inp", "r", stdin);
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\output.out", "w", stdout);
	int tt = 1; //cin >> tt;
	while(tt--) OnePunchAC();
	cerr << '\n' << "Times: " << TIME << "s." << '\n';
	return 0;
}