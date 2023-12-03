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
int n, t[4 * n];
void update(int id, int l, int r, int x, int y) {
	if(x < l || x > r) return;
	if(l == r) {
		t[id] = y;
		return;
	}
	int m = l + r >> 1;
	update(id * 2, l, m, x, y);
	update(id * 2 + 1, m + 1, r, x, y);
	t[id] = max(t[id * 2], t[id * 2 + 1]);
}
int get(int id, int l, int r, int u, int v) {
	if(l > v || u < r) {
		return -1;
	}
	if(l >= u && r <= v) {
		return t[id];
	}
	int m = l + r >> 1;

}
void solve() {
    
}

/** ----------ALGORITHMS----------

    ------------------------------ **/

/** ----------MAIN FUNCTION---------- **/
int main() {
	fastIO
	//freopen("input.inp", "r", stdin);
	//freopen("output.out", "w", stdout);
	int t = 1; //cin >> t;
	while(t--) solve();
	return 0;
}