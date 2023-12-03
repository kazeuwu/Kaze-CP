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
	int n, k; cin >> n >> k;
	k *= 1024;
	int findmin = INT_MAX;
	vector<pii> v;
	for(int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		if(x < findmin) findmin = x;
		v.pb({y, x});
	}
	sort(all(v));
	ll ans = 0, tight = 0;
	for(int i = sz(v) - 1; i >= 0;) {
		if(v[i].se >= v[i - 1].se && v[i].fi <= v[i - 1].fi) --i;
		tight += v[i].se;
		if(tight > k) {
			tight -= v[i].se;
			--i;
		}
		else {
			ans += v[i].fi;
			if(k - tight < findmin) break;
		}
	}
	cout << ans;
	return 0;
}