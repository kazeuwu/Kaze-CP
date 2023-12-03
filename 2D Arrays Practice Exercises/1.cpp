/**
 *    created: 11/07/2023 21:40:57
**/
#include <bits/stdc++.h>
using namespace std;

/** --------MACROS-------- **/
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl '\n'
#define pb push_back
#define pf push_front
#define cint(x) int(x - '0')
#define fi first
#define se second
#define llll pair<long long, long long>
#define pii pair<int, int>
#define ll long long
#define ull unsigned long long
#define ldb long double

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;

/** --------BASIC FUNCTIONS-------- **/
[[maybe_unused]] ll binpow(ll a, ll n) { int res = 1; while(n) { if(n & 1) {res *= a;} a *= a; n >>= 1; } return res; }
[[maybe_unused]] ll gcd(ll a, ll b) { if(b == 0) return a; return gcd(b, a % b); }
[[maybe_unused]] ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

/** --------PROBLEM SOLVING-------- **/
bool check(int x) {
    if(x < 2) return false;
	for(int i = 2; i <= sqrt(x); i++) {
		if(x % i == 0) return false;
	}
	return true;
}
void solve() {
	int n, m; cin >> n >> m;
	int a[n][m];
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
	map<int, int> mp;
	for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (check(a[i][j]) && mp[a[i][j]] == 0) {
                cout << a[i][j] << " ";
                mp[a[i][j]] = 1;
            }
        }
    }
}

/** ------------------------------
     In ra cac phan tu la so nguyen to (luu y moi so chi in 1 lan)
    -------------------------- **/

/** --------MAIN FUNCTION-------- **/
int main() {
//	freopen("test.INP", "r", stdin);
//	freopen("test.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int t = 1;
	while(t--) solve();
	return 0;
}