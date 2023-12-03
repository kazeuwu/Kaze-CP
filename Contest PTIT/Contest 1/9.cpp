/**
 *    Author:  Akira
 *    Created: 06.06.2023 16:12:50
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
/**
void solve() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int k = 1;
		for(int i = 1; i <= n; i++) {
			k *= 2;
		}
		string s[k + 5];
		s[1] = "0";
		s[2] = "1";
		if(n > 1) {
			int pre = 2;
			for(int i = 2; i <= n; i++) {
				int pr = 1;
				for(int j = 1; j <= i; j++) {
					pr *= 2;
				}
				for(int j = 1; j <= pre; j++) {
					s[pr - j + 1] = "1" + s[j];
					s[j] = "0" + s[j];
				}
				pre = pr;
			}
		}
		for(int i = 1; i <= k; i++) {
			cout << s[i] << " ";
		}
		cout << endl;
	}
}
**/
int n;
int x[100];
void Try(int i) {
	for(int j = 0; j <= 1; j++) {
		x[i] = j;
		if(i == n) {
			for(int i = 1; i <= n; i++) {
				cout << x[i];
			}
			cout << endl;
		}
		else Try(i + 1);
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	//solve();
	cin >> n;
	Try(1);
	return 0;
}
