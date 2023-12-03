/**
 *    author:  akira
 *    created: 03/07/2023 09:43:05
**/
#include <bits/stdc++.h>
using namespace std;

/** --------MACROS-------- **/
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define pf push_front
#define cint(x) int(x - '0')
#define fi first
#define se second
#define llll pair<long long, long long>
#define pii pair<int, int>

typedef long long ll;
typedef long double ldb;
typedef unsigned long long ull;

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;

/** --------BASIC FUNCTIONS-------- **/
ll binpow(ll a, ll n) { int res = 1; while(n) { if(n & 1) {res *= a;} a *= a; n >>= 1; } return res; }
ll gcd(ll a, ll b) { if(b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
                                
/** --------PROBLEM SOLVING-------- **/
void solve() {
	int n; cin >> n;
	float pre = 0.0, pos = -1;
	vector<string> str;
	int idx = -1, cnt = 0;
	cin.ignore();
	for(; n > 0; n--) {
		string s; getline(cin, s);
		stringstream ss(s);
		string word;
		while(ss >> word) { }
		float ans = stof(word);
		if(pre < ans) {
			str.pb(s);
			pre = ans;
			++idx;
		}
	}	
	vector<string> ans;
	stringstream ss(str[idx]);
	string word;
	while(ss >> word) {
		ans.pb(word);
	}
	for(int i = 0; i < sz(ans) - 1; i++) {
		if(i == sz(ans) - 2) {
			cout << ans[i];
		} else {
			cout << ans[i] << ' ';
		}
	}	
}

/** ------------NOTES-------------

    -------------------------- **/

/** --------MAIN FUNCTION-------- **/
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	solve();
	return 0;
}