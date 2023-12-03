// author : akira
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) (int)x.size()
#define akira ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
	akira
	int n; cin >> n;
	ll a[n + 1] = {0}, sum[n + 1] = {0};
	for(int i = 1; i <= n; i++) cin >> a[i];
	sum[1] = a[1];
	for(int i = 2; i <= n; i++) {
		sum[i] += sum[i - 1] + a[i];
	}
	int t; cin >> t;
	while(t--) {
		int l, r; cin >> l >> r;
		cout << sum[r] - sum[l - 1] << '\n';
	}
	return 0;
}