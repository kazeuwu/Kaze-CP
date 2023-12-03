/**
 *    Author:  Akira
 *    Created: 11.06.2023 15:23:04
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
vector<int> a, pr;
int n;
int check(int m) {
	map<int, int> mp;
	for(int i = 1; i <= n - m + 1; i++) {
		mp[pr[i + m - 1] - pr[i - 1]]++;
	}
	for(auto [x, y] : mp) if(y >= 2) return x;
	return -1;
}
void solve() {
	string s; cin >> s;
	a.clear();
	pr.clear();
	a.pb(-1);
	for(auto x : s) a.pb(int(x - '0'));
	n = sz(a) - 1;
	pr.assign(n + 1, 0);
	for(int i = 1; i <= n; i++) {
		pr[i] = pr[i - 1] + a[i];
	}
	int l = 1, r = sz(a), ans = -1, sum;
	while(l <= r) {
		int m = (l + r) >> 1;
		int tmp = check(m);
		if(tmp != -1) {
			ans = m;
			sum = tmp;
			l = m + 1;
		}
		else {
			r = m - 1;
		}
	}
	if(ans == -1) {
		cout << ans << endl;
		return;
	}
	int cnt = 0;
	for(int i = 1; i <= n - ans + 1; i++) {
		if(cnt >= 2) break;
		if(pr[i + ans - 1] - pr[i - 1] == sum) {
			++cnt;
			cout << i << " " << i + ans - 1 << " ";
		}
	}
	cout << endl;
}

int main() {
	freopen("pass.INP", "r", stdin);
	freopen("pass.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
