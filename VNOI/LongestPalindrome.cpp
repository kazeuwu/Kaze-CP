/**
 *    author:  akira
 *    created: 16/06/2023 20:46:58
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
void solve() {
	int p; cin >> p;
	string s; cin >> s;
	s = 'x' + s;
	bool f[p + 1][p + 1];
	memset(f, false, sizeof(f));
	for(int i = 1; i <= p; i++) {
		f[i][i] = true;
	}
	int ans = 1;
	for(int len = 2; len <= p; len++) {
		for(int i = 1; i <= p - len + 1; i++) {
			int j = i + len - 1;
			if(len == 2 && s[i] == s[j]) {
				f[i][j] = true;
			}
			else {
				f[i][j] = f[i + 1][j - 1] && (s[i] == s[j]);
			}
			if(f[i][j]) {
				ans = max(ans, len); 
			}
		}
	}
	cout << ans;
}

int main() {
	//freopen("SOL.INP", "r", stdin);
	//freopen("SOL.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
