/* author : Tran Gia Huy */
#include <bits/stdc++.h>
using namespace std;
 
#define fast_paced ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define builtin_popcount __builtin_popcountll
#define fi first
#define se second
#define p64 pair<long long, long long>
#define p32 pair<int, int>
#define ll long long
#define ull unsigned long long
#define ldb long double
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define maxn 1000005

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923, EPS = 1e-6;
const ll INF = 1e18, MOD = 1e9 + 7, MOD2 = 1e9 + 9;

// Might I solve this issue very expeditiously?
void moon() {
	int n; cin >> n;
	ll dp[n + 1], x[n + 1];
	memset(dp, 0, sizeof dp);
	for (int i = 1; i <= n; i++) cin >> x[i];
	dp[0] = 0; // Trường hợp cơ sở
	if (n >= 1) {
		dp[1] = x[1]; 
	}
	for (int i = 2; i <= n; i++) {
		dp[i] = max(dp[i - 1], dp[i - 2] + x[i]);
	}
	cout << dp[n] << '\n';
}
int main() {
	fast_paced
	int tt = 1; cin >> tt;
	while(tt--) moon();
	cerr << '\n' << "Times: " << TIME << "s." << '\n';
	return 0;
}

/** -------------------- NOTES --------------------

    ----------------------------------------------- **/