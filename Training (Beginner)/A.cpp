/**
 *   author:  akira
 *   created: 30/05/2023 22:59:32
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
typedef unsigned long long ull;
using namespace std;

// Problem A
bool check(ll x) {
	if(x <= 5 && x != 4 && x != 1) return x;
	if(x < 2 || x % 2 == 0 || x % 3 == 0 || x % 5 == 0) return false;
	for(ll i = 5; i * i <= x; i += 6) {
		if(x % i == 0 || x % (i + 2) == 0) return false;
	}
	return true;
}
void solve() {
	ll n; cin >> n;
   if(check(n)) cout << "Yes";
   else cout << "No";
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);
   solve();
   return 0;
}