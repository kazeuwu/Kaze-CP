/**
 *    Author:  Akira
 *    Created: 05.06.2023 10:24:53
**/
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define fi first
#define se second
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

ll gcd(ll a, ll b) { // Euclid
	if(b == 0) return a + b;
	return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
	return a * b / gcd(a, b); // BCNN = Tich a, b chia cho UCLL cua a va b
}                                                         	
void solve() {
	ll a, b; cin >> a >> b;
	cout << gcd(a, b) << " " << lcm(a, b);	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
