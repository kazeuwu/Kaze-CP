/**
 *    author:  akira
 *    created: 04/07/2023 23:05:28
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
ull fibo[93] = {0};
bool bs(ll k) {
	ll l = 0, r = 92, m;
	while(l <= r) {
		m = l + r >> 1;
		if(fibo[m] == k) return true;
		if(fibo[m] > k) r = m - 1;
		else l = m + 1;
	}
	return false;
}
void solve() {
	ll n; cin >> n;
	if(n == 0) {
		cout << "YES" << endl;
		return;
	}
	fibo[1] = fibo[2] = 1;
	for(int i = 3; i <= 92; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
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
	int t; cin >> t;
	while(t--) {
		solve();	
	}
	return 0;
}