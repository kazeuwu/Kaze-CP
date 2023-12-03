// author : Tran Gia Huy
#include "bits/stdc++.h"
using namespace std;

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
int n, q;    
int a[100005];
int bs1(int x) {
	int l = 0, r = n + 1, m;
	while(r - l > 1) {
		m = (l + r) >> 1;
		if(a[m] >= x) r = m;
		else l = m;
	}			
	return (a[r] == x) ? r : -1;
}
int bs2(int x) {
	int l = 0, r = n + 1, m;
	while(r - l > 1) {
		m = (l + r) >> 1;
		if(a[m] <= x) l = m;
		else r = m;
	}
	return (a[l] == x) ? l : -1;
}
void solve() {
	a[0] = a[n + 1] = -1;
    cin >> n >> q;
    for(int i = 1; i <= n; i++) cin >> a[i];
    while(q--) {
    	int t, x; cin >> t >> x;	
    	if(t == 1) {
    		if(bs1(x) != -1) {
    			cout << "YES";
    		}
    		else cout << -1;
    	}
    	else if(t == 2) {
    		cout << bs1(x);
    	}
    	else if(t == 3) {
    		cout << bs2(x);
    	}
    	cout << '\n';
    }
}

int main() {
	fastIO
	freopen("input.inp", "r", stdin);
	freopen("output.out", "w", stdout);
	int t = 1; //cin >> t;
	while(t--) solve();
	cerr << "Times: " << TIME << "s." << endl;
	return 0;
}