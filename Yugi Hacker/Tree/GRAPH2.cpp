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
/**
Đề bài : Cho 1 cây có n đỉnh và n - 1 cạnh có nút gốc là c. Tìm số nút con của mỗi nút (bao gồm cả chính nó)
Sample input :
4 2
1 3
2 1
3  4
Sample output : 3 4 2 1
**/
#define maxn 100005
int n, c, dp[maxn];
vector<int> a[maxn];
void dfs(int u, int p) {
	for (int v : a[u]) {
		if (v != p) {
			dfs(v, u);
			dp[u] += dp[v];		
		}
	}
	dp[u]++;
}                        
void decipher() {
    cin >> n >> c;
    for (int i = 1; i < n; i++) {
    	int x, y; cin >> x >> y;
    	a[x].eb(y);
    	a[y].eb(x);
    }
    dfs(c, -1);
    for (int i = 1; i <= n; i++) cout << dp[i] << " ";
}

int main() {
	fastIO
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\input.inp", "r", stdin);
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\output.out", "w", stdout);
	int tt = 1; //cin >> tt;
	while(tt--) decipher();
	cerr << "Times: " << TIME << "s." << '\n';
	return 0;
}