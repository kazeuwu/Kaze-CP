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
                         
void solve() {
    int n; cin >> n;
    int a[n + 1], b[n + 1];
    bool ok1 = false, ok2 = false, ok3 = false;
    for(int i = 0; i < n; i++) cin >> a[i];
    int i = 0, j = n - 1;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(a[i] == a[j]) {
				if(a[i] == 2) {
					b[j] = 1;
					b[i] = 2;
					ok1 = true;
				}
				else if(a[i] == 3) {
					b[j] = 1;	
					b[i] = 3;
					ok2 = true;
				}
				else if(a[i] == 3) {
					b[j] = 2;
					b[i] = 3;
					ok3 = true;
				}
			}
		}
	}
	int ans = ok1 + ok2 + ok3;
	if(ans >= 2) {
		for(int i = 0; i < n; i++) {
			cout << b[i] << " ";
		}
		cout << '\n';		
	}
	else cout << -1 << '\n';
}

int main() {
	fastIO
	freopen("input.inp", "r", stdin);
	freopen("output.out", "w", stdout);
	int t = 1; cin >> t;
	while(t--) solve();
	cerr << "Times: " << TIME << "s." << endl;
	return 0;
}