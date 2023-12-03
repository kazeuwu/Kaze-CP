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

#define int long long               
/** ----------PROBLEM SOLVING---------- **/
void solve() {
    int n, S; cin >> n >> S;
    int w[n + 1], v[n + 1];
    for(int i = 1; i <= n; i++) cin >> w[i] >> v[i];
    int dp[n + 1][S + 1];
	memset(dp, 0, sizeof dp);
	for(int i = 1; i <= n; i++) {
		for(int j = 0; j <= S; j++) {
			dp[i][j] = dp[i - 1][j];
			if(j >= w[i]) {
				dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
			}
		}
	}
	cout << dp[n][S];
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