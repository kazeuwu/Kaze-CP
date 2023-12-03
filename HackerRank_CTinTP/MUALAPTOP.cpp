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
    int q; cin >> q;
    vector<pair<int, pair<int, int>>> v;
    vector<int> dx, v1; // luu gia tien
    while(q--) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        v.push_back({a, {b, c}});
        v1.push_back(1);
        dx.emplace_back(d);
    }
    for(int i = 0; i < sz(v1); i++) {
        for(int j = 0; j < sz(v1); j++) {
            if(i != j) {
                if(v[i].fi < v[j].fi) {
                    if(v[i].se.fi <  v[j].se.fi) {
                        if(v[i].se.se < v[j].se.se) {
                            v1[i] = 0;
                        }
                    }
                }
            }
        }
    } // 0 1 1 1 0
    int pre = INT_MAX, pos = -1;
    for(int i = 0; i < sz(v1); i++) {
        if(v1[i]) {
            for(int j = 0; j < sz(dx); j++) {
                if(dx[i] < pre) {
                    pre = dx[i];
                    pos = i + 1;
                }
            }
        }
    }
    cout << pos;
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