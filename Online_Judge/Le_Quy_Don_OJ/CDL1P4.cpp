// author : akira
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) (int)x.size()
#define akira ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
	akira
	int m, n, a; cin >> m >> n >> a;
	int area = m * n;
	int ans = area * a;
	cout << ans << " VND";
	return 0;
}