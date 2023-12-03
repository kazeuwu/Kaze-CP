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
// Do thi vo huong
int n, m, a[1001][1001];
int main() {
	akira
	cin >> n >> m;
	for(int i = 0; i < m; i++) {
		int x, y; cin >> x >> y;
		a[x][y] = a[y][x] = 1;
	}
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cout << a[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;
}