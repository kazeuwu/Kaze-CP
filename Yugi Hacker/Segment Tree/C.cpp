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
#define maxn 100005

int n, m;
ll a[maxn], t[maxn * 4];
ll merge(int i, int j) { return (a[i] > a[j]) ? i : j; }
void build(int id, int l, int r) {
	if(l == r) return void(t[id] = l);
	int mid = (l + r) >> 1;
	build(id * 2, l, mid);
	build(id * 2 + 1, mid + 1, r);
	t[id] = merge(t[id * 2], t[id * 2 + 1]);
}       
void update(int id, int l, int r, int x) {
	if(x < l || x > r) return;
	if(l == r) return void(t[id] = x);
	int mid = (l + r) >> 1;
	update(id * 2, l, mid, x);
	update(id * 2 + 1, mid + 1, r, x);
	t[id] = merge(t[id * 2], t[id * 2 + 1]);
}    
ll get(int id, int l, int r, int u, int v) {
	if(u > r || v < l) return 0;
	if(u <= l && v >= r) return t[id];
	int mid = (l + r) >> 1;
	return merge(get(id * 2, l, mid, u, v), get(id * 2 + 1, mid + 1, r, u, v));
}
ll mul(ll a, ll b, ll mod) {
	if(!b) return 0;
	ll t = mul(a, (b >> 1), mod) << 1;
	if(b & 1) t += a;
	return t % mod;
}
void solve() {
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    build(1, 1, n);
	cin >> m;
	a[0] = 1;
	while(m--) {
		int q; cin >> q;
		if(!q) {
			int x, v; cin >> x >> v;
			a[x] = v;
			update(1, 1, n, x);
		}
		else {
			int l, r, mod; cin >> l >> r >> mod;
			int p1 = get(1, 1, n, l, r);
			int p2 = merge(get(1, 1, n, l, p1 - 1), get(1, 1, n, p1 + 1, r));
			cout << mul(a[p1], a[p2], mod) << '\n';
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