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
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n + 1];
		int even = 0, odd = 0;
		for(int i = 1; i <= n; i++) {
			cin >> a[i];
			if(a[i] % 2 == 1) ++odd;
			else ++even;
		}
		int ok = abs(even - odd);
		if((ok > 0 && ok < 3) || odd == 0 || even == 0) {
			cout << "YES" << '\n';
			continue;
		}
		else cout << "NO" << '\n';
	}
	return 0;
}