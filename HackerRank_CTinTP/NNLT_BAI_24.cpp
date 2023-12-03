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
void solve() {
    int n; cin >> n;
    int a[n + 1], pref[n + 1];
    memset(pref, 0, sizeof pref);
    memset(a, 0, sizeof a);
    // for(int i = 1; i <= n; i++) {
    // 	cin >> a[i];
    // 	pref[i] = pref[i - 1] + a[i];
    // }
    // int pre = INT_MAX, pos = -1;
    // for(int i = 1; i <= n; i++) {
    // 	if(pref[i] < pre) {
    // 		pre = pref[i];
    // 		pos = i;
    // 	}
    // }
    // int i = pos - 1, ans = INT_MAX, left = -1;
    // // case 1
    // while(i >= 1) {
    // 	--i;
    // 	int tmp = pre - pref[i];
    // 	ans = min(ans, tmp);
    // 	if(tmp == ans) left = i + 1;
    // }
 	// // case 2
 	// i = pos + 1;
 	// int tmp = pre + a[i], ans2 = INT_MAX;
 	// while(i != left) {
 	// 	++i;
 	// 	if(i == n + 1) i = 0;
 	// 	tmp += a[i];
 	// 	ans2 = min(ans2, tmp);
 	// }
 	// int new_ans = ans + ans2 - pre + 1;
 	// if(new_ans < ans) {
 	// 	cout << new_ans;
 	// } else {
 	// 	cout << ans;
 	// }
    for(int i = 1; i <= n; i++) {
    	int x; cin >> x;
    	a[i] = a[i - 1] + x;
    }
    int ans = INT_MAX, x = 0, y = 0;
    for(int i = 1; i <= n; i++) {
    	if(i < n) {
    		ans = min(ans, a[i] - x);
    	}
    	if(i > 1) {
    		ans = min(ans, a[n] - a[i - 1] + y);
    	}
    	x = max(x, a[i]);
    	y = min(y, a[i - 1]);
    }
    cout << ans;
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