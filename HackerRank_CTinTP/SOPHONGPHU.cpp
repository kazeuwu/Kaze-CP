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
#define int long long
int uoc(int x) {
	int sum = 1;
	for(int i = 2; i < sqrt(x); i++) {
		if(x % i == 0) {
			sum += i + (x / i);
		}
	}
	return sum;
}
void solve() {
    int n; cin >> n;
    bool ok = false;
    int a[n];
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
    	if(uoc(a[i]) > a[i]) {
    		cout << a[i] << '\n';
    		ok = true;
    	}
    }
    if(!ok) cout << -1;
}

/** ----------ALGORITHMS----------

    ------------------------------ **/

/** ----------MAIN FUNCTION---------- **/
signed main() {
	fastIO
	freopen("input.inp", "r", stdin);
	freopen("output.out", "w", stdout);
	int t = 1; //cin >> t;
	while(t--) solve();
}