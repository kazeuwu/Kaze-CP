/**
 *    Author:  Akira
 *    Created: 10.06.2023 21:48:10
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
	int n, m; cin >> n >> m;
	int a[n], b[m];
	for(int &x : a) cin >> x;
	for(int &x : b) cin >> x;
	int i = 0, j = 0;
	ll ans = 0;
	while(i < n && j < m) {
		if(a[i] < b[j]) {
			++i; continue;
		}
		else if(a[i] > b[j]) {
			++j; continue;
		}
		int cnt1 = 0, cnt2 = 0;
		while(i < n && a[i] == b[j]) {
			++cnt1; ++i;
		}
		int tmp = a[i - 1];
		while(j < m && tmp == b[j]) {
			++cnt2; ++j;
		}
		ans += cnt1 * cnt2;
	}
	cout << ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
