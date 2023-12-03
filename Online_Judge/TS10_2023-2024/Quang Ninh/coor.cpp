/**
 *    Author:  Akira
 *    Created: 09.06.2023 13:23:02
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
	ll x = 0, y = 0;
	string s; cin >> s;
	for(int i = 0; i < sz(s); i++) {
		if(s[i] == 'E') ++x;
		else if(s[i] == 'S') --y;
		else if(s[i] == 'W') --x;
		else ++y;
	}
	cout << x << " " << y;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
