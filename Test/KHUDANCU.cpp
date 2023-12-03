// author : Hatakaze (a.k.a Tran Gia Huy)
#include "bits/stdc++.h"
using namespace std;

/** ----------MACROS---------- **/
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

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;

/** ----------BASIC FUNCTIONS---------- **/
[[maybe_unused]] ll binpow(ll a, ll n) { int res = 1; while(n) { if(n & 1) {res *= a;} a *= a; n >>= 1; } return res; }
[[maybe_unused]] ll gcd(ll a, ll b) { if(b == 0) return a; return gcd(b, a % b); }
[[maybe_unused]] ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
                                
/** ----------PROBLEM SOLVING---------- **/
void solve() {
    int m, n, d, k, cnt = 0, ans = 0; cin >> m >> n >> d >> k;
    char a[m][n];
    vector<pair<int, int>> pos;
    for(int i = 0; i < n; i++) {
    	a[0][i] = 'o';
    }
    for(int i = 0; i < m; i++) {
    	a[i][0] = 'o';
    }
    for(int i = 1; i <= m; i++) {
    	for(int j = 1; j <= n; j++) {
    		cin >> a[i][j];
    		if(a[i][j] == 'P') {
    			++cnt;
    			pos.emplace_back(i, j);
    		}
    	}
    }
    for(int c = 0; c < cnt; c++) {
 		int carry = 0;
    	for(int i = pos[c].fi - d; i <= pos[c].fi + d; i++) {
    		for(int j = pos[c].se - d; j <= pos[c].se + d; j++) {
    			if(i >= 1 && i <= m && j >= 1 && j <= n && a[i][j] == '.' || a[i][j] == 'M' || a[i][j] == 'P') {
    				if(a[i][j] == 'M') {
    					++carry;
    				}
    			}
    		}
    	}
    	if(carry >= k) ++ans;
    }
    cout << ans;
}

/** ----------ALGORITHMS----------
	// . là đất trống
	// P là khu dân cư
	// M là siêu thị
    ------------------------------ **/

/** ----------MAIN FUNCTION---------- **/
int main() {
	fastIO
	freopen("KHUDANCU.INP", "r", stdin);
	freopen("KHUDANCU.OUT", "w", stdout);
	int t = 1; //cin >> t;
	while(t--) solve();
	return 0;
}