// author : Tran Gia Huy
#include "bits/stdc++.h"
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define pf push_front
#define eb emplace_back
#define fi first
#define se second
#define p64 pair<long long, long long>
#define p32 pair<int, int>
#define ll long long
#define ull unsigned long long
#define ldb long double
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define maxn 105

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923, EPS = 1e-6;;
const ll INF = 1e18, MOD = 1e9 + 7, MOD2 = 1e9 + 9;

int n, m, dp[maxn][maxn], r[maxn][maxn], U, q;
vector< pair<int, int> > a[maxn];
void dfs(int u, int c) {
	dp[u][c] = 1;
	r[u][c] = U;
	for (auto p : a[u]) {
		int v = p.fi;
		int cc = p.se;
		if (!dp[v][cc] && cc == c) {
			dfs(v, c);
		}
	}
}
void OnePunchAC() {
	memset(dp, 1, sizeof dp);
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		int u, v, c; cin >> u >> v >> c;
		dp[u][c] = dp[v][c] = 0;
		a[u].push_back({v, c});
		a[v].push_back({u, c});
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (dp[i][j] == 0) {
				U = i;
				dfs(i, j);
			}
		}
	}
	cin >> q;
	while(q--) {
		int u, v; cin >> u >> v;
		int ans = 0;
		for (int i = 1; i <= m; i++) {
			if (r[u][i] == r[v][i] && r[u][i]) ++ans;
		}
		cout << ans << '\n';
	}
}
 
int main() {
	fastIO
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\input.inp", "r", stdin);
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\output.out", "w", stdout);
	int tt = 1; //cin >> tt;
	while(tt--) OnePunchAC();
	cerr << '\n' << "Times: " << TIME << "s." << '\n';
	return 0;
}