/**
 *    author:  akira
 *    created: 27/06/2023 11:49:13
**/
#include <bits/stdc++.h>
using namespace std;

/** --------MACROS-------- **/
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define cint(x) int(x - '0')
#define fi first
#define se second
#define llll pair<long long, long long>
#define pii pair<int, int>

typedef long long ll;
typedef long double ldb;
typedef unsigned long long ull;

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;

/** --------BASIC FUNCTIONS-------- **/
ll binpow(ll a, ll n) { int res = 1; while(n) { if(n & 1) {res *= a;} a *= a; n >>= 1; } return res; }
ll gcd(ll a, ll b) { if(b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
                                
/** --------PROBLEM SOLVING-------- **/
bool REVERSE(pii a, pii b) {
	return a.se < b.se;
}
bool check(int x) {
	if(x <= 5 && x != 1 && x != 4) return true;
	if(x < 2 || x % 2 == 0 || x % 3 == 0 || x % 5 == 0) return false;
	for(int i = 5; i * i <= x; i += 6) {
		if(x % i == 0 || x % (i + 2) == 0) return false;
	}
	return true;
}
void solve() {
	int n; cin >> n;
	int a[n];
	vector<pii> v;
	vector<pii> res;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(check(a[i])) {
			v.pb({a[i], i + 1});
		}
	}
	sort(all(v), greater<pii>());
	int carry = v[0].fi;
	res.pb({v[0].fi, v[0].se});
	for(int i = 1; i < sz(v); i++) {
		if(v[i].fi == carry) {
			res.pb({v[i].fi, v[i].se});
		}
		else break;
	}
	sort(all(res), REVERSE);
	cout << res[0].fi << endl << res[0].se << " ";
	for(int i = 1; i < sz(res); i++) {
		cout << res[i].se << " ";
	}
}

/** ------------NOTES-------------

    -------------------------- **/

/** --------MAIN FUNCTION-------- **/
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