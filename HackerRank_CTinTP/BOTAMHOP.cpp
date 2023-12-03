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
vector<int> ans;
void solve() {
	//cout << fixed << setprecision(1);
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }
    int i = 0, j = 0, cnt = 0;
    while(i != n - 1) {
    	++j;
    	if(j == n) {
    		++i;
    		j = i + 1;
    	}
    	int sum = (a[i] + a[j]) / 2;
    	for(int c = 0; c < n; c++) {
    		if(c != i && c != j && a[c] == sum && (a[i] + a[j]) % 2 == 0) {
    			++cnt;
    			//cout << i << " " << j << '\n';
    			int tmp = a[i] + a[j] + a[c];
    			ans.emplace_back(tmp);
    			break;
    		}
    	}
    }
    cout << cnt << '\n';
    int pre = INT_MIN;
    for(int i = 0; i < sz(ans); i++) {
    	if(ans[i] > pre) pre = ans[i];
    }
    cout << pre;
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