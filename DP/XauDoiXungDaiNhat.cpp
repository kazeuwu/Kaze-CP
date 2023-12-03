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
void solve() {
	string s; cin >> s;
	s = " " + s;
	bool dp[sz(s) + 1][sz(s) + 1];
	memset(dp, false, sizeof(dp));
	for(int i = 1; i <= sz(s); i++) {
		dp[i][i] = true;
	}
	int ans = 1;
	for(int len = 2; len <= sz(s); len++) {
		for(int i = 1; i <= sz(s) - len + 1; i++) {
			int j = i + len - 1;
			if(len == 2 && s[i] == s[j]) dp[i][j] = true;
			else {
				dp[i][j] = dp[i + 1][j - 1] && (s[i] == s[j]);
			}
			if(dp[i][j]) ans = max(ans, len);
		}
	}
	cout << ans;
}

/** ------------NOTES-------------

    -------------------------- **/

/** --------MAIN FUNCTION-------- **/
int main() {
	freopen("input.INP", "r", stdin);
	freopen("output.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t = 1;
	while(t--) {
		solve();	
	}
	return 0;
}

/**
 *  ╱|、
 * (˚ˎ 。7  ♡
 *  |、˜〵          
 *  じしˍ,)ノ
**/