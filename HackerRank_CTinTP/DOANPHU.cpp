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
void solve() {
    vector<p32> a;
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
    	int l, r; cin >> l >> r;
    	if(l > r) swap(l, r);
    	a.emplace_back(l, r);
    }
    int cnt = 0;
    for(int i = 0; i < sz(a); i++) {
    	for(int j = i + 1; j < sz(a); j++) {
    		if(a[i].fi >= a[j].fi || a[j].fi >= a[i].fi) ++cnt;
    		else if(a[i].se <= a[j].se || a[j].se <= a[i].se) ++cnt;
    	}
    }
    cout << cnt;
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