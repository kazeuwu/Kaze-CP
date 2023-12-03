/**
 *    author:  akira
 *    created: 20/06/2023 12:29:07
**/
#include <bits/stdc++.h>
using namespace std;

/**--------MACROS--------**/
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define fi first
#define se second
#define llll pair<long long, long long>

typedef long long ll;
typedef long double ldb;
typedef unsigned long long ull;

const ldb PI = 3.14159265358979323846264338327950288419716939937510582097494459230;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;

/**--------BASIC FUNCTIONS--------**/
ll binpow(ll a, ll n) { int res = 1; while(n) { if(n & 1) {res *= a;} a *= a; n >>= 1; } return res; }
ll gcd(ll a, ll b) { if(b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
                                
/**--------PROBLEM SOLVING--------**/
const int MAX = 5e4 + 1;
int n, k, x[MAX];
bool check(int r) {
	int pos = 1;
	for(int i = 0; i < k && pos <= n; i++) {
		int ub = x[pos] + 2 * r;
		for(int j = n / 2; j >= 1; j >>= 2) {
			while(pos + j <= n && x[pos + j] <= ub) pos += j;
		}
		++pos;
	}
	return pos > n;
}
int bs(int l, int r) {
	if(l == r) return l + 1;
	int m = (l + r) / 2;
	if(check(m + 1)) return bs(l, m);
	return bs(m + 1, r);
}
void solve() {
	cin >> n >> k;
	for(int i = 1; i <= n; i++) {
		cin >> x[i];
	}
	sort(x + 1, x + n + 1);
	if(check(0)) cout << 0;
	else cout << bs(0, 5e8 + 1);
}

/**------------NOTES-------------
		 [Qanh 30 04 2007]
    --------------------------**/

/**--------MAIN FUNCTION--------**/
int main() {
	freopen("DAOVANG.INP", "r", stdin);
	freopen("DAOVANG.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t = 1;
	while(t--) {
		solve();	
	}
	return 0;
}