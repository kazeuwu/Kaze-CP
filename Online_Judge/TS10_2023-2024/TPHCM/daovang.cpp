/**
 *    Author:  Akira
 *    Created: 08.06.2023 21:37:02
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
ll n, k, res;
ll x[500005];
bool check(int r) {
	int d = 0, p = 1;	
	for(int i = 1; i <= n + 1; i++) {
		if(x[p] + 2 * r < x[i]) {
			++d; p = i;
		}
	}
	return (d <= k);
}
void solve() {
	cin >> n >> k;
	for(int i = 1; i <= n; i++) {
		cin >> x[i];
	}
	sort(x + 1, x + n + 1);
	x[n + 1] = 999999999;
	int l = 1, r = (x[n] - x[1]) / 2 + 1;
	while(l <= r) {
		int mid = (l + r) / 2;
		if(check(mid)) {
			res = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}
	cout << res;
}

int main() {
	freopen("DAOVANG.INP", "r", stdin);
	freopen("DAOVANG.OUT", "w", stdout);	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
