/**
 *    Author:  Akira
 *    Created: 04.06.2023 21:18:48
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
void pp5(ll x) {
	cout << x << " = ";
	for(int i = 2; i <= sqrt(x); i++) {
		if(x % i == 0) {
			int cnt = 0;
			while(x% i == 0) {
				++cnt;
				x /= i;
			}
            cout << i << "^" << cnt; 
            if(x != 1) {
				cout << " * ";
            }
		}
	}
	if(x != 1) cout << x << "^1";
}
void pp4(ll x) {
	for(int i = 2; i <= sqrt(x); i++) {
		while(x % i == 0) {
			cout << i;
			x /= i;
			if(x != 1) cout << "x";
		}
	}
	if(x != 1) cout << x;
}
void pp3(ll x) {
	for(int i = 2; i <= sqrt(x); i++) {
		if(x % i == 0) {
   			int cnt = 0;
   			while(x % i == 0) {
   				++cnt;
				x /= i;
   			}
   			cout << i << "("<< cnt << ")" << " ";
		}
	}
	if(x != 1) cout << x << "(1)";
}
void pp2(ll x) {
	for(int i = 2; i <= sqrt(x); i++) {
		if(x % i == 0) {
			cout << i << " ";
			while(x % i == 0) {
				x /= i;
			}
		}
	}
}
void pp1(ll x) {
	for(int i = 2; i <= sqrt(x); i++) {
		while(x % i == 0) {
			cout << i << " ";
			x /= i;
		}
	}
	if(x != 1) {
		cout << x;
	}
}
void solve() {
	ll n; cin >> n;
	pp5(n);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
