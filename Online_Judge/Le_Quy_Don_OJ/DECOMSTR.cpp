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
	string s; cin >> s;   // 48n3bz
	vector<pair<char, int>> v;
	for(int i = 0; i < sz(s); i++) {
		if(s[i] >= '0' && s[i] <= '9') {
			int cnt = 1;
			vector<int> tmp; tmp.emplace_back(s[i] - '0');
			for(int j = i + 1; j < sz(s); j++) {
				if(s[j] >= 'a' && s[i] <= 'z') break;
				tmp.emplace_back(s[j] - '0');
				++cnt;
			}
			int res = 0;
			for(int x = sz(tmp) - 1, carry = 1; x >= 0; x--) {
				res += (tmp[x] * carry);
				carry *= 10;
			}
			v.push_back({(s[i + cnt]), res});
			i += cnt;
		}
		else {
			v.push_back({(s[i]), 1});
		}
	}
	for(int i = 0; i < sz(v); i++) {
		for(int j = 0; j < v[i].se; j++) {
			cout << v[i].fi;
		}
	}
}