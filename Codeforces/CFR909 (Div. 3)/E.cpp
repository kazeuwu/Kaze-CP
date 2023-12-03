// author : Tran Gia Huy
#include "bits/stdc++.h"
using namespace std;
#pragma GCC optimize("O2")
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
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;


void solve() {
    int n; cin >> n;
    vector<int> a;
    int prem = INT_MAX;
    for(int i = 0; i < n; i++) {
    	int x; cin >> x;
    	if(x < prem) prem = x;
    	a.pb(x);
    }
    int cnt = 0;
    while(true) {
    	int f = a[0]; 
    	if(f == prem) {
    		for(int i = 1; i < sz(a); i++) {
    			if(a[i] < a[i - 1]) {
    				cout << -1 << '\n';
    				return;
    			}
    			//cout << a[i] << " ";
    		}
    		cout << cnt << '\n';
    		return;
    	}
    	a.erase(a.begin());
    	a.pb(f);
    	int r = n - 1;
    	while(r >= 0) {
    		if(a[r] <= a[r - 1]) {
    			swap(a[r], a[r - 1]);
    			--r;
    		}
    		else break;
    	}
    	++cnt;
    }
}

int main() {
	fastIO
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\input.inp", "r", stdin);
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\output.out", "w", stdout);
	int t = 1; cin >> t;
	while(t--) solve();
	cerr << "Times: " << TIME << "s." << endl;
	return 0;
}