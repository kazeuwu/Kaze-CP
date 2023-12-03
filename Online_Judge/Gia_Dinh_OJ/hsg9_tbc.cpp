/**
 *    Author:  Akira
 *    Created: 09.06.2023 13:53:34
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
	ll n; cin >> n;
	ll sum = 0;
	int a[n];
	vector<int> b;
	for(int &x : a) cin >> x;
	b.pb(a[0]);
	for(int i = 1, tmp = 2; i <= n; i++) {
		sum += b[i - 1]; // Tong truoc a[i]
		ll x = tmp * a[i] - sum; // VD: (15 + x) / 2 == 20 --> x = 25 (KQ) Trong do x la so can tim de ra duoc trung binh cong
		if((sum + x) / tmp == a[i]) {
			b.pb(x);
		}
		++tmp;
	}
	for(int i = 0; i < n; i++) {
		cout << b[i] << " ";
	}
	

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
