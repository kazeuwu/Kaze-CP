/**
 *    Author:  Akira
 *    Created: 06.06.2023 16:59:38
**/
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
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
int a[100], n, k;
string s = "";
vector<string> res;
void backtrack(int i) {
	for(int j = 0; j <= 1; j++) {
		a[i] = j;
		if(i == n - k) {
			for(int x = 1; x <= n - k; x++) {
				if(x == 1 && a[x] == 1) {
					string tmp = s;
					for(int y = 1; y <= n - k; y++) {
						if(a[y] == 0) tmp += "A";
						else tmp += "B";
					}
					res.pb(tmp);
				}
				if(x == n - k && a[x] == 1) {
					string tmp = "";
					for(int y = 1; y <= n - k; y++) {
						if(a[y] == 0) tmp += "A";
						else tmp += "B";
					}
					tmp += s;
					res.pb(tmp);
				}
				if(a[x] && a[x - 1] && x > 1) {
					string tmp = "";
					for(int y = 1; y <= n - k; y++) {
						if(y == x) tmp += s;
						if(a[y] == 0) tmp += "A";
						else tmp += "B";
					}
					res.pb(tmp);
				}
			}
		}
		else backtrack(i + 1);
	}
}
void solve() {
	cin >> n >> k;
	for(int i = 0; i < k; i++) {
		s += "A";
	}
	backtrack(1);
	sort(all(res));
	cout << sz(res) << endl;
	for(int i = 0; i <= sz(res); i++) {
		cout << res[i] << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
