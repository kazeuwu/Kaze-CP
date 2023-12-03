/**
 *    author:  akira
 *    created: 19/06/2023 00:51:37
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
	int n; cin >> n;
	int a[n];
	bool check = false;
	int fipos = 0;
	int sepos = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(a[i] > 0) check = true;
	}
	if(!check) {
		cout << "-1 -1";
		return;
	}
	for(int i = 0; i < n; i++) {
		if(a[i] > 0) {
			fipos = i + 1;
			break;
		}
	}
	for(int i = n - 1; i >= 0; i--) {
		if(a[i] > 0) {
			sepos = i + 1;
			break;
		}
	}
	cout << fipos << " " << sepos;
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