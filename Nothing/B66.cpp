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
	int n; cin >> n;
	vector<pii> a;
	for(int i = 0; i < n; i++) {
		int tmp; cin >> tmp;
		a.pb({tmp, 1});
	}
	int m; cin >> m;
	vector<pii> b;
	for(int i = 0; i < m; i++) {
		int tmp; cin >> tmp;
		b.pb({tmp, 2});
	}
	vector<int> c;
	int i = 0, j = 0;
	while(i < n && j < m) {
		if(a[i].fi <= b[j].fi) {
			cout << a[i].fi << " ";
			c.pb(a[i].se); ++i;
		}
		else {
			cout << b[j].fi << " ";
			c.pb(b[j].se); ++j;
		}
	}
	while(i < n) {
		cout << a[i].fi << " ";
		c.pb(a[i].se); ++i;
	}
	while(j < m) {
		cout << b[j].fi << " ";
		c.pb(b[j].se); ++j;
	}
	cout << '\n';
	for(int i = 0; i < sz(c); i++) {
		if(c[i] == 1) cout << 'a';
		else cout << 'b';
	}
	return 0;
}