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
/// Chuyen danh sach canh sang danh sach ke
int n, m;
vector<int> v[1001];
int main() {
	akira
	cin >> n >> m;
	for(int i = 0; i < m; i++) {
		int x, y; cin >> x >> y;
		v[x].pb(y);
		v[y].pb(x);
	}
	for(int i = 1; i <= n; i++) {
		cout << i << " : ";
		for(int j = 0; j < sz(v[i]); j++) {
			cout << v[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;
}