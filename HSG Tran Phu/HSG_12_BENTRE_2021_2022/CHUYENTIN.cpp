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

/** ------------------------------ NOTES ------------------------------
* Gọi dp[i][j] là tổng chi phí nhỏ nhất để tạo ra i gói sử dụng kênh j -> đáp án : dp[n][m]
* Tại kênh j phải sử dụng x gói -> duyệt for tính số gói tại kênh j
* Trong trạng thái này x là gói tại kênh j -> Số gói trước đó là i - x tại kênh j - 1
* Công thức DP: dp[i][j] = min(dp[i][j], dp[i - x][j - 1] + a[x][j])
* Nghĩa là tổng (i - x) gói tại (j - 1) kênh trước + gói x tại kênh j
* Vector ans lưu vết
* Truy vết
** ------------------------------------------------------------------**/
int n, m;
int a[101][101], dp[101][101], ans[101][101];  
vector<int> res(101);

void truyvet(int i, int j) {
    if(j == 0) return;
    int x = ans[i][j];
    res[j] = x;
    truyvet(i - x, j - 1);
}      
void solve() {
	memset(dp, 0, sizeof dp); 
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
    	for (int j = 1; j <= m; j++) {
    		cin >> a[i][j];
    		dp[i][j] = 1e9;
    	}
    }
    for (int i = 1; i <= n; i++) dp[i][1] = a[i][1];
    for (int i = 1; i <= n; i++) {
    	for (int j = 2; j <= m; j++) {
    		for (int x = 0; x <= i; x++) { 			
    			if (dp[i][j] > dp[i - x][j - 1] + a[x][j]) {
                    dp[i][j] = dp[i - x][j - 1] + a[x][j];
                    ans[i][j] = x;
                }
    		}
    	}
    }
    cout << dp[n][m] << '\n';
    truyvet(n, m);
    for (int i = 1; i <= m; i++) cout << res[i] << '\n';
}

int main() {
	fastIO
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\input.inp", "r", stdin);
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\output.out", "w", stdout);
	int t = 1; //cin >> t;
	while(t--) solve();
	cerr << "Times: " << TIME << "s." << endl;
	return 0;
}