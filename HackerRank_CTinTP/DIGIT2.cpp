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
string a, b;
int two(string x) {
	int ans = 0, j = 0;
	for(int i = sz(x) - 1; i >= 0; i--, j++) {
		if(x[i] == '1') {
			ans += pow(2, j);
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
void solve() {
	cin >> a >> b;
	vector<string> ax, bx;
	vector<int> cx, dx;
	for(int i = 0; i < sz(a); i++) {
		if(a[i] == '0') {
			string tmp = a;
			tmp[i] = '1';
			ax.push_back(tmp);
		} else {
			string tmp = a;
			tmp[i] = '0';
			ax.push_back(tmp);
		}
	}
	for(int i = 0; i < sz(b); i++) {
		if(b[i] == '0') {
			string tmp = b;
			tmp[i] = '1';
			bx.push_back(tmp);
			tmp[i] = '2';
			bx.push_back(tmp);
		}
		else if(b[i] == '1') {
			string tmp = b;
			tmp[i] = '0';
			bx.push_back(tmp);
			tmp[i] = '2';
			bx.push_back(tmp);
		} else {
			string tmp = b;
			tmp[i] = '1';
			bx.push_back(tmp);
			tmp[i] = '0';
			bx.push_back(tmp);
		}
	}
	for(int i = 0; i < sz(ax); i++) {
		cx.push_back(two(ax[i]));
	}
	for(int i = 0; i < sz(bx); i++) {
		dx.push_back(three(bx[i]));
	}
	for(int i = 0; i < sz(cx); i++) {
		for(int j = 0; j < sz(dx); j++) {
			if(cx[i] == dx[j]) {
				cout << cx[i];
				return;
			}
		}
	}
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