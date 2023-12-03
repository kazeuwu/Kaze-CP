/**
 *    Author:  Akira
 *    Created: 10.06.2023 20:29:19
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
	while(i < n && j < m) {
		if(a[i] <= b[j]) {
			cout << a[i] << " "; ++i;
		}
		else {
			cout << b[j] << " "; ++j;
		}
	}
	while(i < n) {
		cout << a[i] << " "; ++i;
	}
	while(j < m) {
		cout << b[j] << " "; ++j;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
