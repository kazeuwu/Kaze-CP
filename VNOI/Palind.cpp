/**
 *    Author:  Akira
 *    Created: 09.06.2023 12:57:51
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
int n;
string s;
bool check(string x)  {
	x = " " + x;
	for(int i = 1; i <= sz(x) / 2; i++) {
		if(x[i] != x[sz(x) - i + 1]) return false;
	}                       
	return true;
	
}
void solve() {
	cin >> n >> s;
	s = " " + s;
	int res = 0;
	for(int i = 1; i <= n; i++) {
		for(int j = i; j <= n; j++) {
			string tmp = s.substr(i, j - i + 1);
			if(check(tmp)) res = max(res, j - i + 1);
		}
	}
	cout << res;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
