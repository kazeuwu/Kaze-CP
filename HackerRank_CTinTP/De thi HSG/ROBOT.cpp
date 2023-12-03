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
int n, l, p;
vector<p32> a;
int f(int l, int p) {
	sort(all(a));
	priority_queue<int> pq;
	int pos = 0, ener = p, cnt = 0, idx = 0;
	while(pos + ener < l) { // hien tai
		int newpos = pos + ener; // tiep theo
		while(idx < sz(a) && a[idx].fi <= newpos) {
			pq.push(a[idx].se);
			idx++;
		}
		if(pq.empty()) {
			return -1; 
		}
		int u = pq.top();
		pq.pop();

		int k = a[idx].fi - pos;
		pos = a[idx].fi;
		ener -= k;
		ener += u;
		++cnt;
	}
	return cnt;
}
void solve() {
	a.clear();
    cin >> n;
    for(int i = 0; i < n; i++) {
    	int d, c; cin >> d >> c;
    	a.push_back({d, c}); // 1st = kc, 2nd = energy
    }
    cin >> l >> p;
    cout << f(l, p) << '\n';
}

/** ----------ALGORITHMS----------

    ------------------------------ **/

/** ----------MAIN FUNCTION---------- **/
int main() {
	fastIO
	//freopen("input.inp", "r", stdin);
	//freopen("output.out", "w", stdout);
	int t; cin >> t;
	while(t--) solve();
	return 0;
}