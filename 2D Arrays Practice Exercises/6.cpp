/**
 *    author:  akira
 *    created: 15/07/2023 17:47:15
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
	int a[n + 2][m + 2];
	memset(a, 0, sizeof a);
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			int tmp; cin >> tmp;
			a[i][j] = tmp;
		}
	}
	ll sum = 0;
	int pref[n][m];
	memset(pref, 0, sizeof pref);
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			for(int x = i - 1; x <= i + 1; x++) {
				for(int y = j - 1; y <= j + 1; y++) {
					//if(x == i && y == j) continue;
					sum += a[x][y];
					pref[i][j] = sum;
				}
			}
			//cout << sum << " ";
			sum = 0;
		}
		//cout << endl;
	}
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			cout << pref[i][j] << " ";
		}
		cout << endl;
	}
}

/** ------------------------------
         1 2 3 4 5
         2 3 4 5 6
         3 4 5 6 7
         4 5 6 7 8
         5 6 7 8 9
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