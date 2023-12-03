// author : akira
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) (int)x.size()
#define akira ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n, a[100009], b[100009];
void update(int i, int j, int &pre) {
	if(i >= 0 && i < n && abs(a[i] + b[j]) < pre) {
		pre = abs(a[i] + b[j]);
	}
}

int main() {
	akira
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++) cin >> b[i];
	sort(a, a + n);
	int pre = abs(a[0] + b[0]);
	for(int i = 0; i < n; i++) {
		int x = lower_bound(a, a + n, -b[i]) - a;
		update(x, i, pre);
		update(x - 1, i, pre);
	}
	cout << pre;
	return 0;
}