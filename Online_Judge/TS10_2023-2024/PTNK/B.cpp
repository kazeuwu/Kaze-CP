/**
 *    author:  akira
 *    created: 19/06/2023 21:01:32
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

/**--------BASIC FUNCTIONS--------**/
ll binpow(ll a, ll n) { int res = 1; while(n) { if(n & 1) {res *= a;} a *= a; n >>= 1; } return res; }
ll gcd(ll a, ll b) { if(b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
                                
/**--------PROBLEM SOLVING--------**/
bool X(pair<int, int> a, pair<int, int> b) {
	return a.fi < b.fi;
}
bool Y(pair<int, int> a, pair<int, int> b) {
	return a.se < b.se;
}
pair<int, int> a[1000001];
void solve() {
	int n, m, k; cin >> n >> m >> k;
	for(int i = 1; i <= 4 * k; i++) {
		int x, y; cin >> x >> y;
		a[i] = {x, y};
	}
	sort(a + 1, a + 4*k + 1, X);
	ll tmp = a[2*k + 1].fi - a[2*k].fi;
	sort(a + 1, a + 2*k + 1, Y);
	sort(a + 2*k + 1, a + 4*k + 1, Y);
	ll cnt = max(0, min(a[3*k + 1].se, a[k + 1].se) - max(a[k].se, a[3*k].se));
	cout << cnt * tmp;
}

/**------------NOTES-------------
		 [Qanh 30 04 2007]
    --------------------------**/

/**--------MAIN FUNCTION--------**/
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