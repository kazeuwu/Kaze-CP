// author : akira
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) (int)x.size()
#define akira ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
	akira
	int n; cin >> n;
	int a[n][n] = {{0}};
	int idx = 1;
	int c1 = 0, c2 = n - 1, h1 = 0, h2 = n - 1;
	while(c1 <= c2 && h2 <= h2) {
		for(int i = c1; i <= c2; i++) {
			a[h1][i] = idx;
			++idx;
		}
		++h1;
		for(int i = h1; i <= h2; i++) {
			a[i][c2] = idx;
			++idx;
		}
		--c2;
		if(h1 <= h2) {
			for(int i = c2; i >= c1; i--) {
				a[h2][i] = idx;
				++idx;
			}
			--h2;
		}
		if(c1 <= c2) {
			for(int i = h2; i >= h1; i--) {
				a[i][c1] = idx;
				++idx;
			}
			++c1;
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;
}