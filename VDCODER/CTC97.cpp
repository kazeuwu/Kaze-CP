/**
 *    author:  akira
 *    created: 28/06/2023 15:12:53
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
bool comp(string s1, string s2) {
	if(sz(s1) > sz(s2)) return true;
	if(sz(s1) < sz(s2)) return false;
	for(int i = 0; i < sz(s1); i++) {
		if(s1[i] > s2[i]) return true;
		if(s1[i] < s2[i]) return false;	
	}
	return false;
}
void solve() {
	string s1, s2, s3, s4; cin >> s1 >> s2;
	s3 = s1;
	s4 = s2;
	while(sz(s3) > 0 && s3[0] == '0') s3.erase(s3.begin());
	while(sz(s4) > 0 && s4[0] == '0') s4.erase(s4.begin());
	if(comp(s3, s4)) cout << s1;
	else cout << s2;
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