/**
 *    Author:  Akira
 *    Created: 09.06.2023 22:24:39
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
		ldb a, b, c, d; cin >> a >> b >> c >> d;
		ldb res1 = 0.000000, res2 = 0.000000;
		if(c > 0) {
			res1 = a * (100.000000 / (100.000000 + c));
		} 
		else {
			res1 = a * (2.000000 - (100.000000 / (100.000000 - c)));
		}
		if(d > 0) {
			res2 = b * (100.000000 / (100.000000 + d));
		}
		else {
			res2 = b * (2.000000 - (100.000000 / (100.000000 - d)));
		}
		cout << setprecision(6) << fixed << res1;
		cout << " ";
		cout << setprecision(6) << fixed << res2;
		cout << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
