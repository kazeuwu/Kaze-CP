// author : akira
#include <bits/stdc++.h>
using namespace std;

#define akira ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl '\n'
#define pb push_back
#define pf push_front
#define cint(x) int(x - '0')
#define fi first
#define se second
#define llll pair<long long, long long>
#define pii pair<int, int>
#define ll long long
#define ull unsigned long long
#define ldb long double

int main() {
	akira
	ll n, m, ans = 0; cin >> n >> m;
	ll a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	for(int i = 0; i < n - 1; i++) {
		ll tmp = m - a[i];
		if(tmp <= 0) continue;
		ll pos = upper_bound(a + i + 1, a + n, tmp) - a;
		ans += max(pos - i - 1, 0ll);
	}
	cout << ans;
	return 0;
}