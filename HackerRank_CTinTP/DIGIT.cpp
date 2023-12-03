// author : Tran Gia Huy
#include "bits/stdc++.h"
using namespace std;

/** ----------MACROS---------- **/
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define p64 pair<long long, long long>
#define p32 pair<int, int>
#define ll long long
#define ull unsigned long long
#define ldb long double

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;
                         
/** ----------PROBLEM SOLVING---------- **/
int ter = 0; // size tam phan
bool ok;
string a, b, ternary = ""; // ternary luu tam thoi xau tam phan
char ax[109], bx[109];
vector<string> cx, dx; // cx[] luu nhi phan, dx[] luu tam phan
ll binpow(int a, int n) {
	ll res = 1;
	while(n) {
		if(n & 1) {
			res *= a;
		}
		n >>= 1;
		a *= 2;
	}
	return res;
}
int two(string x) {
	int ans = 0, j = 0;
	for(int i = sz(x) - 1; i >= 0; i--, j++) {
		if(x[i] == '1') {
			ans += binpow(2, j);
		}
	}
	return ans;
}
int three(string x) { // 2102  = 65
	int ans = 0, j = 0;
	for(int i = sz(x) - 1; i >= 0; i--, j++) {
		if(x[i] == '1') {
			ans += pow(3, j);
		}
		else if(x[i] == '2') {
			ans += 2 * pow(3, j);
		}
	}
	return ans;
}
//Generation
void gene(int x) {
	int i = x; // do dai
	while(i >= 1 && ax[i] == '1') {
		ax[i] = '0';
		--i;
	}
	if(i == 0) ok = 0;
	else ax[i] = '1';
}
// Ternary
void gene3(int x) {
	if(x == ter) {
		dx.push_back(ternary);
		return;
	}
	for(char i = '0'; i <= '2'; i++) {
		ternary += i;
		gene3(x + 1);
		ternary.pop_back();
	}
}
void reset() {
	for(int i = 0; i <= 100; i++) {
		ax[i] = bx[i] = '0';
	} 
}
void solve() { // a nhi phan, b tam phan
    cin >> a >> b;
    int x = sz(a), y = sz(b);
    reset();
    // nhi phan
    ok = 1;
    while(ok) {
    	string str = "";
 	   	for(int i = 1; i <= x; i++) {
 	   		str += ax[i];
    	}
    	cx.push_back(str);
    	gene(x);
    }

    // tam phan
    ter = y - 1; // size xau tam phan
    gene3(0);
    
}

/** ----------ALGORITHMS----------

    ------------------------------ **/

/** ----------MAIN FUNCTION---------- **/
int main() {
	fastIO
	freopen("input.inp", "r", stdin);
	freopen("output.out", "w", stdout);
	int t = 1; //cin >> t;
	while(t--) solve();
	return 0;
}