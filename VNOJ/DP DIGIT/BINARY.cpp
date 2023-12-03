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
#define maxn 1000005

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923, EPS = 1e-6;
const ll INF = 1e18, MOD = 1e9 + 7, MOD2 = 1e9 + 9;

ll n, k, dp[35][35][2][2];
vector<int> digit;

ll f(int idx, int cnt, int tight, int mask) {
	if (idx == sz(digit)) {
		if (cnt == k) return 1;
		return 0;
	}
	if (dp[idx][cnt][tight][mask] != -1) return dp[idx][cnt][tight][mask];
	int lim = (tight) ? 1 : digit[idx];
	ll ans = 0;
	for (int i = 0; i <= lim; i++) {
		int new_cnt = cnt;
		int new_tight = (i < digit[idx]) ? 1 : tight;
		int new_mask = mask;
		if (mask && i == 0) ++new_cnt;
		if (i == 1) new_mask = 1;
		if (new_cnt <= k) ans += f(idx + 1, new_cnt, new_tight, new_mask);
	}
	return dp[idx][cnt][tight][mask] = ans;
}
void OnePunchAC() {
    while (cin >> n >> k) {
    	memset(dp, -1, sizeof dp);
    	ll old_n = n;
    	digit.clear();
    	while(n) {
    		digit.emplace_back(n & 1);
    		n >>= 1;
    	}
    	reverse(all(digit));
    	if (digit.empty()) digit.emplace_back(0);
    	if (k == 0) {
    		if (__builtin_popcount(old_n + 1)) cout << sz(digit) << '\n';
    		else cout << sz(digit) - 1 << '\n';
    		continue;
    	}
    	if (k > sz(digit)) {
    		cout << 0 << '\n';
    		continue;
    	}
    	cout << f(0, 0, 0, 0) + (k == 1) << '\n';
    }
}
 
int main() {
	fastIO
	int tt = 1; //cin >> tt;
	while(tt--) OnePunchAC();
	cerr << '\n' << "Times: " << TIME << "s." << '\n';
	return 0;
}
