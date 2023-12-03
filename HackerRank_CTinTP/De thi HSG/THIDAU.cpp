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
                         
ll dp[100005];
void solve() {
    ll n, k; cin >> n >> k;
    ll a[n + 1], b[n + 1];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    dp[0] = b[0];
	for (int i = 1; i < n; i++) { // a[i] - a[j] >= k => a[i] - k >= a[j]
		int j = upper_bound(a, a + i, a[i] - k) - a - 1;
		dp[i] = dp[i - 1];
		if(j >= 0) dp[i] = max(dp[i], dp[j] + b[i]);
		else dp[i] = max(dp[i], b[i]);
	}
	cout << dp[n - 1];
}

int main() {
	fastIO
	freopen("input.inp", "r", stdin);
	freopen("output.out", "w", stdout);
	int t = 1; //cin >> t;
	while(t--) solve();
	cerr << "Times: " << TIME << "s." << endl;
	return 0;
}