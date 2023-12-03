/**
 *    author:  akira
 *    created: 16/06/2023 13:05:55
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
	ll a, b, c, x, y, z; cin >> x >> y >> z >> a >> b >> c;
	if(a < x) {
		cout << "NO" << endl;
		return;
	}
	if(a + b < x + y) {
		cout << "NO" << endl;
		return;
	}
	if(a + b + c < x + y + z) {
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
}

int main() {
	//freopen("SOL.INP", "r", stdin);
	//freopen("SOL.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
