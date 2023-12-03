/**
 *    Author:  Akira
 *    Created: 05.06.2023 10:55:27
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
const ldb EPS = 1e-6;
ll pow(ll a, ll b) { // a^b (a mu b)
	if(b == 0) return 1;
	ll x = pow(a, b / 2);
	if(b % 2 == 0) return x * x; // b chan => a^b/2 x a^b/2
	return x * x * a;            // b le => a^b/2 x a^b/2 x a
}
void solve() {
	int a, b; cin >> a >> b;
	cout << pow(a, b) << '\n';
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t; cin >> t;
	while(t--) solve();
	return 0;
}
