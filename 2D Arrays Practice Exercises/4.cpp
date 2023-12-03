/**
 *    author:  akira
 *    created: 13/07/2023 20:44:56
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
#define ll long long
#define ull unsigned long long
#define ldb long double

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
set<ll> fibo;
void sieve() {
	ll f[93];
	f[0] = 0;
	f[1] = f[2] = 1;
	for(int i = 3; i < 93; i++) {
		f[i] = f[i - 1] + f[i - 2];
		fibo.insert(f[i]);
	}
}
void solve() {
	int n, m; cin >> n >> m;
	int a[m][n];
	sieve();
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> a[j][i];
		}
	}
	ll sum = 0, fre = -1, pos;
	for(int i = 0; i < m; i++) {
		ll cnt = 0, tmp = 0;
		for(int j = 0; j < n; j++) {
			if(fibo.count(a[i][j])) {
				++cnt;
				tmp += a[i][j];
			}
		}
		if(cnt > fre) {
			fre = cnt;
			sum = tmp;
			pos = i;
		}
		else if(cnt == fre) {
			if(sum < tmp) {
				pos = i;
				sum = tmp;
			}
		}
	}
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << pos + 1 << endl;
	for(int i = 0; i < n; i++) {
		cout << a[pos][i] << " ";
	}
}

/** ------------------------------

    -------------------------- **/

/** --------MAIN FUNCTION-------- **/
int main() {
	//freopen(".INP", "r", stdin);
	//freopen(".OUT", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 1;
	while(t--) solve();
	return 0;
}