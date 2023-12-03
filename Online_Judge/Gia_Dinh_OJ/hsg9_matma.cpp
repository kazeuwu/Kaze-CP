/**
 *    Author:  Akira
 *    Created: 09.06.2023 14:29:30
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
string a[505];
void solve() {
	int n, m, k, x; cin >> n >> m >> k >> x;
	string s; cin >> s;
	for(int i = 1; i <= m; i++) {
		cin >> a[i];
		sort(all(a[i]));
	}
	--x;
	vector<int> X;
	while(x > 0) {
		X.pb(x % k);
		x /= k;
	}
	while(sz(X) < m) X.pb(0);
	reverse(all(X));
	int idx = 0;
	for(int i = 0; i < sz(s); i++) {
		if(s[i] == '#') {
			s[i] = a[idx + 1][X[idx]];
			++idx;
		}
	}
	cout << s;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
