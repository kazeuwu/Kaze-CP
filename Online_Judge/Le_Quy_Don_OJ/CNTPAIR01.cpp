/**
 *    author:  akira
 *    created: 20/06/2023 16:53:45
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
ll combination(ll k, ll x) {
	if(k == 0 || k == x) return 1;
	if(k == 1) return x;
	return combination(k - 1, x - 1) + combination(k, x - 1);
}
void solve() {
	int n; cin >> n;
	int cnt[100001] = {0};
	int a[n];
	ll res = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		++cnt[a[i]];
	}
	for(int i = 0; i < 100000; i++) {
		if(cnt[i] > 1) {
			ll ans = combination(2, cnt[i]);
			res += ans;
		}
	}
	cout << res;
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