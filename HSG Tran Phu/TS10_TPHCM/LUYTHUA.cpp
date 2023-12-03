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
           
ll binpow(ll a, ll n) {
	ll res = 1;
	while(n) {
		if(n & 1) res *= a;
		a *= a;
		n >>= 1;
	}
	return res;
}              
void solve() {
    ll n; cin >> n;
	ll res = 0;
	int num[n];
	int exponent[n];
	for(int i = 0; i < n; i++) {
		cin >> num[i];
		exponent[i] = num[i] % 10;
	}
	for(int i = 0; i < n; i++) {
		num[i] = (num[i] - (num[i] % 10)) / 10;
	}
	for(int i = 0; i < n; i++) {
		res += binpow(num[i], exponent[i]);
	}
	cout << res;
}

int main() {
	fastIO
	//freopen("LUYTHUA.INP", "r", stdin);
	//freopen("LUYTHUA.OUT", "w", stdout);
	int t = 1; //cin >> t;
	while(t--) solve();
	cerr << "Times: " << TIME << "s." << endl;
	return 0;
}