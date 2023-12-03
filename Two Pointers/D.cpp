/**
 *    Author:  Akira
 *    Created: 11.06.2023 14:16:39
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
7 20
2 6 4 3 6 8 9

if(sum + a[i] <= 20)
	sum += a[i];
			  
			         l
For instance, sum =  2 + 6 + 4 + 3 + 6 = 21
                                     r
=> 21 - l if <= 20 => update distance
=> r - l + 1 => 4 - 1 + 1 = 4
---------------------**/
const ldb PI = 3.14159265358979323846264338327950288419716939937510582097494459230;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;
void solve() {
	ll n, s; cin >> n >> s;
	int a[n];
	for(int &x : a) cin >> x;
	ll sum = 0, l = 0, r, ans = 0;
	for(r = 0; r < n; r++) {
		sum += a[r];
		while(sum > s) {
			sum -= a[l];
			++l;
		}
		ans = max(ans, r - l + 1);
	}
	cout << ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
