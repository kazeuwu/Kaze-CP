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
	string s; cin >> s;
	string a, b;
	for(int i = 0; i < sz(s); i++) {
		if(s[i] >= 'A' && s[i] <= 'Z') a += s[i];
		else b += s[i];
	}
	sort(all(a));
	sort(all(b));
	reverse(all(a));
	reverse(all(b));
	cout << a << b;
}