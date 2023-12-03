/**
 *    author:  akira
 *    created: 17/06/2023 23:10:06
**/
#include <bits/stdc++.h>
using namespace std;
/**--------MACROES--------**/
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define fi first
#define se second
#define llll pair<long long, long long>

typedef long long ll;
typedef long double ldb;
typedef unsigned long long ull;

const ldb PI = 3.14159265358979323846264338327950288419716939937510582097494459230;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;

/**--------FUNCTIONS--------**/
ll binpow(ll a, ll n) { int res = 1; while(n) { if(n & 1) {res *= a;} a *= a; n >>= 1; } return res; }
ll gcd(ll a, ll b) { if(b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

/**--------NOTES---------
	7 20
	2 6 4 3 6 8 9
	(output = 4)
    ---------------------**/

void solve() {
	ll n, s; cin >> n >> s;
	int a[n];
	for(int &x : a) cin >> x;
	int l = 0, ans = 1e9, sum = 0;
	for(int r = 0; r < n; r++) {
		sum += a[r];
		while(sum >= s) {
			ans = min(ans, r - l + 1);
			sum -= a[l];
			++l;
		}
	}
	if(ans == 1e9) cout << "-1";
	else cout << ans;
}

int main() {
	//freopen(".INP", "r", stdin);
	//freopen(".OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t = 1;
	while(t--) {
		solve();	
	}
	return 0;
}
