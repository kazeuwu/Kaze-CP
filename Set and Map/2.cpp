/**
 *    Author:  Akira
 *    Created: 14.06.2023 14:18:19
**/
#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define fi first
#define se second
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) x / __gcd(x, y) * y
typedef long long ll;
typedef long double ldb;
using namespace std;
/**------Ideas---------
---------------------**/
const ldb PI = 3.14159265358979323846264338327950288419716939937510582097494459230;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;
void solve() {
	int t; cin >> t;
	while(t--) {
		ll n; cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		int q; cin >> q;
		while(q--) {
			int tmp; cin >> tmp;
			bool ok = false;
			for(int i = 0; i < n; i++) {
				if(a[i] == tmp) {
					ok = true;
					break;
				}
			}
			if(ok) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
