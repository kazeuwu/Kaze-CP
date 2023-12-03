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
#define int long long
const int n = 1020;
int binpow(int a, int n) {
	int res = 1;
	while(n) {
		if(n & 1) {
			res *= a;
		}
		n >>= 1;
		a *= 2;
	}
	return res;
}
void solve() {
    int k; cin >> k;
    vector<ll> a(n);
    vector<ll> v;
    for(int i = 1; i < n; i++) {
    	a[i] = binpow(2, i); // size of chocolate
    }
    auto key = lower_bound(all(a), k);
    if(k == *key) {
    	cout << *key << " " << 0;
    	return;
    }
    int tmp = *key;
    while(tmp) {
        v.emplace_back(tmp >> 1);
        tmp >>= 1;
    }
    int i = 0, sum = 0, pos = -1;
    while(i < sz(v)) {
        sum += v[i];
        if(sum == k) break;
        if(sum > k) {
            sum -= v[i];
            ++i;
        } else ++i;
    }
    cout << *key << " " << i + 1;
}

/** ----------ALGORITHMS----------

    ------------------------------ **/

/** ----------MAIN FUNCTION---------- **/
signed main() {
	fastIO
	freopen("input.inp", "r", stdin);
	freopen("output.out", "w", stdout);
	int t = 1; //cin >> t;
	while(t--) solve();
}