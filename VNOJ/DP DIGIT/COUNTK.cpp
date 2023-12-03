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
const ll INF = 1e18, MOD = 1234567891, MOD2 = 1e9 + 9;

vector<int> digit;
ll dp[20][35][2], l, r, k;
ll f(int idx, int cnt, int tight) {
	if (idx == sz(digit)) {
		return cnt;
	}
	if (dp[idx][cnt][tight] != -1) return dp[idx][cnt][tight];
	int lim = (tight) ? digit[idx] : 9;
	ll ans = 0;
	for (int i = 0; i <= lim; i++) {
		int new_cnt = cnt;
		if (i == k) ++new_cnt;
		int new_tight = (tight) && digit[idx] == i;
		ans += f(idx + 1, new_cnt, new_tight);
	}
	return dp[idx][cnt][tight] = ans;
}
ll fix(ll x) {
	ll cnt = 0;
	for (ll i = 10; i <= x; i *= 10) {
		cnt += (x / i) * (i / 10);
		cnt += min(max(x % i - i / 10 + 1, 0LL), i / 10);
	}
	return cnt;
}
ll g(ll x) {
	digit.clear();
	while (x) {
		digit.emplace_back(x % 10);
		x /= 10;
	}
	reverse(all(digit));
	memset(dp, -1, sizeof dp);
	return f(0, 0, 1);
}

// Solve this issue very expeditiously.
void OnePunchAC() {
	cin >> l >> r >> k;
	if (k == 0) {
    	return void (cout << fix(r) - fix(l - 1) << '\n');
    }
	cout << g(r) - g(l - 1) << '\n';
}
 
int main() {
	fastIO
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\input.inp", "r", stdin);
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\output.out", "w", stdout);
	int tt = 1; cin >> tt;
	while(tt--) OnePunchAC();
	cerr << '\n' << "Times: " << TIME << "s." << '\n';
	return 0;
}