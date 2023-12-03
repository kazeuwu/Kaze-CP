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
const int N = 10000000;
vector<int> lp(N + 1);
vector<int> pr;
void solve() {
	int a, b; cin >> a >> b;
    for (int i = 2; i <= N; ++i) {
	    if (lp[i] == 0) {
	        lp[i] = i;
	        pr.push_back(i);
	    }
	    for (int j = 0; i * pr[j] <= N; ++j) {
	        lp[i * pr[j]] = pr[j];
	        if (pr[j] == lp[i]) {
	            break;
	        }
	    }
	}
	auto l = lower_bound(all(pr), a) - pr.begin();
	auto r = lower_bound(all(pr), b) - pr.begin();
	for(int i = l; i < r; i++) {
		cout << pr[i] << '\n';
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