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

#define maxn 1000005
int n, m;
vector<int> adj[maxn], r_adj[maxn];
bool used[maxn];
stack<int> st;

void dfs1(int u) {
	used[u] = true;
	for(int v : adj[u]) {
		if(!used[v]) dfs1(v);
	}
	st.push(u);
}
void dfs2(int u) {
	used[u] = true;
	for(int v : r_adj[u]) {
		if(!used[v]) dfs2(v);
	}
}
void SCC() {
	memset(used, false, sizeof used);
	for(int i = 1; i <= n; i++) {
		if(!used[i]) dfs1(i);
	}
	memset(used, false, sizeof used);
	int cnt = 0;
	vector<int> a;
	while(!st.empty()) {
		int u = st.top(); st.pop();
		if(!used[u]) {
			a.pb(u);
			dfs2(u);
			++cnt;
		}
	}
	if(cnt == 1) cout << "YES" << '\n';
	else {
		cout << "NO" << '\n';
		cout << a[1] << " " << a[0];
	}
}
void solve() {
	cin >> n >> m;
	for(int i = 0; i < m; i++) {
		int x, y; cin >> x >> y;
		adj[x].pb(y);
		r_adj[y].pb(x);
	}  
	SCC();
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