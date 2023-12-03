/**
 *    author:  akira
 *    created: 20/06/2023 11:59:24
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
	int n, m; cin >> n >> m;
	vector<pair<int, int>> x;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			char tmp; cin >> tmp;
			if(tmp == '0') {
				x.pb({i, j});
			}
		}
	}
	int q; cin >> q;
	cin.ignore();
	string s;
	for(int i = 0; i < q; i++) {
		getline(cin, s);
		cout << s << " " << x[i].fi << " " << x[i].se << endl;
	}
}

/**--------MAIN FUNCTION--------**/
int main() {
	freopen("rapphim.INP", "r", stdin);
	freopen("rapphim.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t = 1;
	while(t--) {
		solve();	
	}
	return 0;
}