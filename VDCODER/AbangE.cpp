/**
 *    author:  akira
 *    created: 24/06/2023 17:36:27
**/
#include <bits/stdc++.h>
using namespace std;

/** --------MACROS-------- **/
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
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
void check(string s) {
	vector<char> p;
	for(int i = 0; i < sz(s); i++) {
		if(s[i] == 'a' && s[i + 1] == 'n' && s[i + 2] == 'h') {
			p.pb('e');
			p.pb('m');
			i += 2;
		}
		else {
			p.pb(s[i]);
		}
	}
	for(int i = 0; i < sz(p); i++) {
		cout << p[i];
	}
}
void solve() {
	string s; getline(cin, s);
	stringstream ss(s);
	vector<string> v;
	string word;
	while(ss >> word) {
		check(word);
		cout << " ";
	}
}

/** ------------NOTES-------------

    -------------------------- **/

/** --------MAIN FUNCTION-------- **/
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