// author : Tran Gia Huy
#include "bits/stdc++.h"
using namespace std;

/** ----------MACROS---------- **/
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define p64 pair<long long, long long>
#define p32 pair<int, int>
#define ll long long
#define ull unsigned long long
#define ldb long double

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;
                         
/** ----------PROBLEM SOLVING---------- **/
bool prime(int x) {
	if(x == 1 || x == 4) return false;
	if(x <= 5 && x != 1 && x != 4) return true;
	if(x % 2 == 0 || x % 3 == 0 || x % 5 == 0) return false;
	for(int i = 5; i * i <= x; i += 6) {
		if(x % i == 0 || x % (i + 2) == 0) return false;
	}
	return true;
}
bool perfect(int x) {
	if(x == 1) return false;
	int sum = 1;
	for(int i = 2; i < sqrt(x); i++) {
		if(x % i == 0) {
			sum += i + (x / i);
		}
	}
	return sum == x;
}
bool square(int x) {
	int tmp = sqrt(x);
	return (x == tmp * tmp);
}
void solve() { // Prime num, perfect num, square num
	int n; cin >> n;
	vector<int> x, y, z;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < n; i++) {
		if(prime(a[i])) {
			x.emplace_back(a[i]);
		}
		if(perfect(a[i])) {
			y.emplace_back(a[i]);
		}
		if(square(a[i])) {
			z.emplace_back(a[i]);
		}
	}
	for(int i = 0; i < sz(x); i++) {
		cout << x[i] << " ";
	}
	cout << '\n';
	for(int i = 0; i < sz(y); i++) {
		cout << y[i] << " ";
	}
	cout << '\n';
	for(int i = 0; i < sz(z); i++) {
		cout << z[i] << " ";
	}
}

/** ----------ALGORITHMS----------

    ------------------------------ **/

/** ----------MAIN FUNCTION---------- **/
int main() {
	fastIO
	freopen("input.inp", "r", stdin);
	freopen("output.out", "w", stdout);
	int t = 1; //cin >> t;
	while(t--) solve();
	return 0;
}