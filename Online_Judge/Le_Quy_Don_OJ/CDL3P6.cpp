/** author : akira **/
#include "bits/stdc++.h"
using namespace std;

#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define int long long
#define fi first
#define se second

const int MOD = 1e9 + 7;

signed main() {
	fastIO
	int n; cin >> n;
	int cnt = 0;
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) cnt += 2;
	}
	int c = sqrt(n);
	if(c * c == n) --cnt;
	cout << cnt;
}