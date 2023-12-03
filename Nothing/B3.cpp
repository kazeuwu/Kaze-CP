// author : akira
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) (int)x.size()
#define akira ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ull unsigned long long
const ll MOD = 1e9 + 7;

int main() {
	akira
	int t; cin >> t;
	while(t--) {
		ll n; cin >> n;
		ll cntnum = 0;
		if(n & 1) ++n;
		cntnum += (n >> 1);
		ll ans = (cntnum * (2 * cntnum + 1) * (2 * cntnum - 1)) / 3;
		cout << ans << '\n';
	}
	return 0;
}                                                   