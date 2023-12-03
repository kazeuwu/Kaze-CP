/**
 *    author:  akira
 *    created: 15/07/2023 20:24:45
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
void solve() {
	int n, m; cin >> n >> m;
	int a[n][m];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	int c1 = 0, c2 = m - 1, h1 = 0, h2 = n - 1;
	while(h1 <= h2 && c1 <= c2) {
		for(int i = c1; i <= c2; i++) {
			cout << a[h1][i] << " ";
		}
		++h1;
		for(int i = h1; i < h2; i++) {
			cout << a[i][c2] << " ";
		}
		--c2;   
		if(h1 <= h2) {
			for(int i = c2; i >= c1; i--) {
				cout << a[h2][i] << " ";
			}
			--h2;
		}
		if(c1 <= c2) {
			for(int i = h2; i >= h1; i--) {
				cout << a[i][c1] << " ";
			}
			++c1;
		}
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