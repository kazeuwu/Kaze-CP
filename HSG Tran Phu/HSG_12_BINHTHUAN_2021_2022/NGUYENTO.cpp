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
bool check(ll x) {
	if (x < 2 || x == 4) return false;
	if (x == 2 || x == 3 || x == 5) return true;
	if (x % 2 == 0 || x % 3 == 0 || x % 5 == 0) return false;
	for (int i = 2; i * i <= x; i += 5) {
		if(x % i == 0 || x % (i + 2) == 0) return false;
	}
	return true;
}             
void solve() {
	ll n; cin >> n;
	for (int i = sqrt(n); i < n; i++) {
		if (check(i) && i * i >= n) {
			cout << i * i;
			break;
		}
	}
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