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
#define maxn 200
int n;
ll a[maxn], h;   
bool check(ll x) {
	ll s = 0;
	a[n + 1] = 2e18;
	for (int i = 1; i <= n; i++) {
		s += min(x, a[i + 1] - a[i]);
	}
	return s >= h;
}                    
void solve() {
    cin >> n >> h;
    for (int i = 1; i <= n; i++) cin >> a[i];
    ll l = 0, r = 1e18;
	while(r - l > 1) {
		ll m = (l + r) >> 1;
		if(check(m)) r = m;
		else l = m;
	}
	cout << r << '\n';
}

int main() {
	fastIO
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\input.inp", "r", stdin);
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\output.out", "w", stdout);
	int t = 1; cin >> t;
	while(t--) solve();
	cerr << "Times: " << TIME << "s." << endl;
	return 0;
}