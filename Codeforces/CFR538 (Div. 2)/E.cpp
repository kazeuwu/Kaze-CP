/**
 *    author:  akira
 *    created: 17/06/2023 17:01:28
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
	mt19937 rng;
	int n; cin >> n;
	int l = 0, r = 1e9, k;
	while(l < r) {
		int m = (l + r) / 2;
		cout << "> " << m << endl;
		cin >> k;
		if(k) l = m + 1;
		else r = m;
	}
	k = r;
	int g = 0;
	for(int i = 0; i < 30; i++) {
		cout << "? " << (rng() % n) + 1 << endl;
		int h; cin >> h;
		g = gcd(g, r - h);
	}
	cout << "! " << k - (n - 1) * g << " " << g << endl;
}

int main() {
	//freopen("SOL.INP", "r", stdin);
	//freopen("SOL.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
