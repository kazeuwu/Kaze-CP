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
#define maxn 1000001

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;

int n, k, ans;
ll x[maxn];     
bool check(ll R) {
	int i = 1, j = 1, cnt = 1;
	while(j <= n) {
		ll X = (x[i] + x[j] + 1) >> 1;
		if(X - R <= x[i] && X + R >= x[j]) ++j;
		else i = j, ++cnt;
	}
	return cnt <= k;
}               
void solve() {
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> x[i];
    sort(x + 1, x + n + 1);
	ll l = 0, r = 1e9;
	while(l <= r) {
		ll m = (l + r) >> 1;
		if(check(m)) ans = m, r = m - 1;
		else l = m + 1;
	}
	cout << ans;
}

int main() {
	fastIO
	int t = 1; //cin >> t;
	while(t--) solve();
	cerr << "Times: " << TIME << "s." << endl;
	return 0;
}