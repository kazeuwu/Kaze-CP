/**
 *    Author:  Akira
 *    Created: 06.06.2023 16:52:03
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
int a[100];
int n, k;
void backtrack(int i) {
	for(int j = 0; j <= 1; j++) {
		a[i] = j;
		if(i == n) {
			int cnt = 0;
			for(int x = 1; x <= n; x++) {
				if(a[x] == 1) ++cnt;
				
			}
			if(cnt == k) {
				for(int x = 1; x <= n; x++) {
					cout << a[x];
				}
				cout << endl;
			}
		}
		else backtrack(i + 1);
	}
}
void solve() {
	int t; cin >> t;
	while(t--) {
		cin >> n >> k;
		backtrack(1);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
