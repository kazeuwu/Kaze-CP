/**
 *    author:  akira
 *    created: 19/06/2023 14:33:02
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
	int n, l; cin >> n >> l;
	int w[100001], h[100001], dp[100001], m;
	for(int i = 1; i <= n; i++) {
	    cin >> h[i] >> w[i];
	}
	for(int i = 1; i <= n; i++) {
	    w[i] += w[i - 1];
	}
	dp[0] = 0;
	for(int i = 1; i <= n; i++) {
	    dp[i] = 1000000001;
	    m = h[i];
	    for(int j = i - 1; j >= 0; j--) {
	        if(w[i] - w[j] > l) {
	            break;
	        }
	        dp[i] = min(dp[i], dp[j] + m);
	        m = max(m, h[j]);
	    }
	}
	cout << dp[n];
}

/**------------NOTES-------------
		 [Qanh 30 04 2007]
    --------------------------**/

/**--------MAIN FUNCTION--------**/
int main() {
	//freopen(".INP", "r", stdin);
	//freopen(".OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t = 1;
	while(t--) {
		solve();	
	}
	return 0;
}