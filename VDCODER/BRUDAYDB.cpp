/**
 *    author:  akira
 *    created: 04/07/2023 22:50:45
**/
#include <bits/stdc++.h>
using namespace std;

/** --------MACROS-------- **/
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl '\n'
#define pb push_back
#define pf push_front
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
vector<ll> ans;
void divi(ll n) {
	if(sqrt(n) == (ll)sqrt(n)) ans.pb(sqrt(n));
	for(int i = 2; i < sqrt(n); i++) {
		if(n % i == 0) {
			ans.pb(i);
			ans.pb(n / i);
		}
	}
}
void sieve(ll n) {
	bool pr[n];
	memset(pr, true, sizeof(pr));
	for(int i = 2; i < n; i++) {
		if(pr[i]) {
			for(int j = i * i; j < n; j += i) {
				pr[j] = false;
			}
			if(n % i != 0) ans.pb(i);
		}
	}
}
void solve() {
	ll n; cin >> n;
	ans.pb(1);
	ans.pb(n);
	divi(n);
	sieve(n);
	sort(all(ans), greater<ll>());
	cout << sz(ans) << endl;
	for(int i = 0; i < sz(ans); i++) cout << ans[i] << " ";
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