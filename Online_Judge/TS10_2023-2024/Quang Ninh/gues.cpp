/**
 *    Author:  Akira
 *    Created: 09.06.2023 13:26:21
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
	ll a[3];
	for(int i = 0; i < 3; i++) {
		cin >> a[i];
	}
	sort(a, a + 3);
	ll v = a[1] - a[0];
	ll u = a[2] - a[1];
	ll minx = min(u, v);
	if(v == u) {
		if(a[0] - v > 0) {
			cout << a[0] - v << " ";
		}
		cout << a[2] + v;
	}
	else {
		if(a[0] + minx == a[1]) {
			cout << a[2] - minx << " ";
		}
		else {
			cout << a[1] - minx << " ";
		}
	}

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
