// author : akira
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) (int)x.size()
#define akira ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
	akira
	ll n, k; cin >> n >> k;
	ll ans = n / k;
	if(n % k != 0) {
		++ans;
		cout << ans;
		return 0;
	}
	cout << ans;
	return 0;
}