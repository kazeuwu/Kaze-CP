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
   
#define int long long                      
/** ----------PROBLEM SOLVING---------- **/
void solve() {
    int n, k, p1, p2; cin >> n >> k >> p1 >> p2;
    int sum = 0;
    if(n < k) {
        sum += (n * p1);
        cout << sum;
        return;
    } else if(k == 1) {
        p1 = min(p1, p2);
    } else if(n == 1) {
        p1 = min(p1, p2);
        cout << p1;
        return;
    }
    int x = (n / k) * p2, y = (k * (n / k)) * p1;
    sum = min(x, y);
    n %= k;
    sum += (n * p1);
    cout << sum;
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