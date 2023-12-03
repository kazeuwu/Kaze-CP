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

#define maxn 1001
int n, m, cnt, vis[maxn][maxn];
char a[maxn][maxn];
int ax[4] = {0, -1, 0, 1};
int ay[4] = {-1, 0, 1, 0};
void dfs(int u, int v) {
	a[u][v] = '#';
	for (int i = 0; i < 4; i++) {
		int i1 = u + ax[i];
		int j1 = v + ay[i];
		if (u >= 1 && u <= n && v >= 1 && v <= m && a[i1][j1] == '.') {
			dfs(i1, j1);
		}
	}
}
void solve() {
	memset(vis, 0, sizeof vis);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
    	for (int j = 1; j <= m; j++) {
    		cin >> a[i][j];
    	}
    }
    for (int i = 1; i <= n; i++) {
    	for (int j = 1; j <= m; j++) {
    		if (a[i][j] == '.') {
    			dfs(i, j);
    			++cnt;
    		}
    	}
    }
    cout << cnt;
}

int main() {
	fastIO
	//freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\input.inp", "r", stdin);
	//freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\output.out", "w", stdout);
	int t = 1; //cin >> t;
	while(t--) solve();
	cerr << "Times: " << TIME << "s." << endl;
	return 0;
}