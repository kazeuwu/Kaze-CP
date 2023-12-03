// author : Tran Gia Huy
#include "bits/stdc++.h"
using namespace std;

/** ----------MACROS---------- **/
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

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;
                         
/** ----------PROBLEM SOLVING---------- **/
string s;
int k, vt = 1, n;
p32 a[1000001], tree[4000001];

void setup(int idx, int l, int r) {
	if(l == r) {
		tree[idx] = a[l]; return;
	}
	int m = l + r >> 1;
	setup(idx * 2, l, m);
	setup(idx * 2 + 1, m + 1, r);
	if(tree[idx * 2].fi >= tree[idx * 2 + 1].fi) {
		tree[idx] = tree[idx * 2];
	} else {
		tree[idx] = tree[idx * 2 + 1];
	}
}
p32 val(int idx, int l, int r, int u, int v) {
	if(l > v || r < u) return make_pair(-1, -1);
	if(l >= u && r <= v) return tree[idx];
	int m = l + r >> 1;
	p32 left = val(idx * 2, l, m, u, v);
	p32 right = val(idx * 2 + 1, m + 1, r, u, v);
	if(left.fi >= right.fi) return left;
	else return right;
}
void solve() {
	cin >> s >> k;
	n = sz(s);
	k = n - k;
	s = " " + s;
	for(int i = 1; i < sz(s); i++) {
		a[i] = make_pair(s[i] - '0', i);
	}
	setup(1, 1, n);
	while(k > 0) {
		p32 ans = val(1, 1, n, vt, n - k + 1);
		cout << ans.fi;
		vt = ans.se + 1;
		--k;
	}
}

/** ----------ALGORITHMS----------

    ------------------------------ **/

/** ----------MAIN FUNCTION---------- **/
int main() {
	fastIO
	freopen("input.inp", "r", stdin);
	freopen("output.out", "w", stdout);
	int t = 1; //cin >> t;
	while(t--) solve();
	return 0;
}