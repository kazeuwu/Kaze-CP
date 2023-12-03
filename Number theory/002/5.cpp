/**
 *    Author:  Akira
 *    Created: 05.06.2023 14:57:37
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
void fiboNormal(ll n) { // Cach 1
	cout << "0 1 ";
	ll f2 = 0, f1 = 1;
	for(int i = 3; i <= n; i++) {
		ll fn = f1 + f2;
		cout << fn << " ";
		f2 = f1;
		f1 = fn;
	}
}
void fiboArray(ll n) { // Cach 2
	ll fibo[n];
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2; i <= n; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	for(int i = 0; i <= n; i++) {
		cout << fibo[i] << " ";
	}
}
void solve() {
	ll n; cin >> n;
	//fiboNormal(n);
	fiboArray(n);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
