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
#define maxn 100005

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923, EPS = 1e-6;
const ll INF = 1e18, MOD = 1e9 + 7, MOD2 = 1e9 + 9;

int n, a[maxn], ans = 1;
vector<int> dp(maxn, 0);
void OnePunchAC() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
    	cin >> a[i];
    }
    dp[1] = a[1];
    for (int i = 2; i <= n; i++) {
    	if (a[i] < dp[1]) dp[1] = a[i];
    	else if (a[i] > dp[ans]) dp[++ans] = a[i];
    	else {
    		int l = 0, r = ans + 1;
    		while (r - l > 1) {
    			int m = (l + r) >> 1;
    			if (dp[m] >= a[i]) r = m;
    			else l = m;
    		}
    		dp[r] = a[i];
    	}
    }
    cout << ans << '\n';
    //for (int i = 1; i <= n; i++) cout << dp[i] << " "; // Truy vet
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