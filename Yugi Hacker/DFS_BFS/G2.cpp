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
int n, m, dp[101][101][101];
bool vis[101];
void dfs(int i, int x) {
	vis[x] = true;
	for (int j = 1; j <= n; j++) {
		if (dp[i][x][j] && !vis[j]) dfs(i, j);
	}
}
void moon() {
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		int a, b, c; cin >> a >> b >> c;
		dp[c][a][b] = dp[c][b][a] = 1;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
	}
	int q; cin >> q;
	while (q--) {
		int x, y, ans = 0; cin >> x >> y;
		for (int i = 1; i <= m; i++) {
			memset(vis, false, sizeof vis);
			dfs(i, x);
			if (vis[y]) ++ans;
		}
		cout << ans << '\n';
	}
}
 
int main() {
	fast_paced
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\input.inp", "r", stdin);
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\output.out", "w", stdout);
	int tt = 1; //cin >> tt;
	while(tt--) moon();
	cerr << '\n' << "Times: " << TIME << "s." << '\n';
	return 0;
}

/** -------------------- NOTES --------------------
	tách đồ thị ra từng màu khác nhau
	=> dp[color][dinh u][dinh v];
	dfs mỗi đỉnh u của màu c
    ----------------------------------------------- **/