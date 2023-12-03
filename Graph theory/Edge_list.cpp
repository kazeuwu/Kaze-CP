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
/// Chuyen ma tran ke sang danh sach canh
int n, a[1001][1001];
vector<pii> edge;
int main() {
	akira
	cin >> n;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(a[i][j] && i < j) {
				edge.pb({i, j});
			}
		}
	}
	for(int i = 0; i < sz(edge); i++) {
		cout << edge[i].fi << " " << edge[i].se << '\n';
	}
	return 0;
}