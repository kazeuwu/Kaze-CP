/**
 *    author:  akira
 *    created: 20/06/2023 12:17:45
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
void solve() {
	ll n; cin >> n;
	ll res = 0;
	int num[n];
	int exponent[n];
	for(int i = 0; i < n; i++) {
		cin >> num[i];
		exponent[i] = num[i] % 10;
	}
	for(int i = 0; i < n; i++) {
		num[i] = (num[i] - (num[i] % 10)) / 10;
	}
	for(int i = 0; i < n; i++) {
		res += binpow(num[i], exponent[i]);
	}
	cout << res;
}

/**------------NOTES-------------
		 [Qanh 30 04 2007]
    --------------------------**/

/**--------MAIN FUNCTION--------**/
int main() {
	freopen("LUYTHUA.INP", "r", stdin);
	freopen("LUYTHUA.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t = 1;
	while(t--) {
		solve();	
	}
	return 0;
}