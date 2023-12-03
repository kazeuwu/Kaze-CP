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
int giaithua(int x) {
	if(x == 1) return 1;
	return x * giaithua(x - 1);	
}
signed main() {
	fastIO
	string s; cin >> s;
	int cnt = 0;
	for(int i = 0; i < sz(s); i++) {                   
		if((s[i] - '0') % 2 == 0) ++cnt;
	}
	cout << cnt;
	int k = sz(s) - cnt;
	int a = giaithua(sz(s));
	int b = giaithua(cnt);
	int c = giaithua(k);
	int ans = a / (b * k);
	cout << ans;
}