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

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923, EPS = 1e-6;
const ll INF = 1e18, MOD = 1e9 + 7, MOD2 = 1e9 + 9;

#define maxn 100005
int n, m, parent[maxn], dp[maxn];
vector<int> a[maxn];                  
void decipher() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
    	int x, y; cin >> x >> y;
    	a[y].eb(x);
    	a[x].eb(y);
    }
    queue<int> q;
    q.push(1);
    dp[1] = 1;
    while (!q.empty()) {
    	int u = q.front(); q.pop();
    	for (int v : a[u]) {
    		if (!dp[v]) {
    			q.push(v);
    			parent[v] = u;
    			dp[v] = dp[u] + 1;
    		}
    	}
    }
    if (dp[n]) {
    	cout << dp[n] << '\n';
    	vector<int> path;
    	while (n) {
    		path.eb(n), n = parent[n];
    	}
    	reverse(all(path));
    	for (int i = 0; i < sz(path); i++) cout << path[i] << " ";
    } else cout << "IMPOSSIBLE";
}

int main() {
	fastIO
	//freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\input.inp", "r", stdin);
	//freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\output.out", "w", stdout);
	int tt = 1; //cin >> tt;
	while(tt--) decipher();
	cerr << "Times: " << TIME << "s." << '\n';
	return 0;
}