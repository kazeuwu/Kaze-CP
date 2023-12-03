/**
 *    author:  akira
 *    created: 16/06/2023 23:07:17
**/
#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define fi first
#define se second
#define llll pair<long long, long long>
typedef long long ll;
typedef long double ldb;
typedef unsigned long long ull;
using namespace std;
/**-----FUNCTIONS-----**/
ll binpow(ll a, ll n) {int res = 1; while(n) {if(n & 1) {res *= a;} a *= a; n >>= 1;} return res;}
ll gcd(ll a, ll b) {if(b == 0) {return a;} return gcd(b, a % b);}
ll lcm(ll a, ll b) {return a / gcd(a, b) * b;}
/**-----COMMENTS----->
<------------------**/
const ldb PI = 3.14159265358979323846264338327950288419716939937510582097494459230;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;
int n;
int dp[5005][5005];
vector<int> a(1), b;
vector<int> ans;
void solve() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		if(x != a.back()) a.pb(x);
	}
	n = sz(a) - 1;
	b = a;
	reverse(b.begin() + 1, b.end());
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(a[i] == b[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	cout << n - (dp[n][n] + 1) / 2 << endl;
}

int main() {
	//freopen("SOL.INP", "r", stdin);
	//freopen("SOL.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
