/**
 *    author:  akira
 *    created: 18/06/2023 12:51:05
**/
#include <bits/stdc++.h>
using namespace std;

/**--------MACROS--------**/
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
const int MAX = 2e5 + 1;
/**--------BASIC FUNCTIONS--------**/
ll binpow(ll a, ll n) { int res = 1; while(n) { if(n & 1) {res *= a;} a *= a; n >>= 1; } return res; }
ll gcd(ll a, ll b) { if(b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
                                
/**--------PROBLEM SOLVING--------**/
ll a[MAX], b[MAX];
void solve() {
	ll n; cin >> n;
	for(ll i = 1; i <= n; i++) {
		cin >> a[i];
	}
	ll x = n, y = 0;
	ll m; cin >> m;
	for(ll i = 1; i <= m; i++) {
		cin >> b[i];
	}
	for(ll i = 2; i <= n; i++) {
		if(a[i] < a[i - 1]) {
   			x = i - 1;
   			break;
		}
	}
	for(ll i = m - 1; i > 0; i--) {
		if(b[i] > b[i + 1]) {
			y = i + 1;
			break;
		}
	}
	ll j = y, ans = 0;
	bool ok = false;
	for(ll i = 1; i <= x; i++) {
		while(a[i] > b[j]) {
			++j;
			if(j > m) {
				ok = true;
				break;
			}
		}
		if(ok) break;
		ans = max(ans, i + m - j + 1);
	}
	cout << ans;
}

/**------------NOTES-------------
		 [Qanh 30 04 2007]
    --------------------------**/

/**--------MAIN FUNCTION--------**/
int main() {
	freopen("MARBLE.INP", "r", stdin);
	freopen("MARBLE.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t = 1;
	while(t--) {
		solve();	
	}
	return 0;
}