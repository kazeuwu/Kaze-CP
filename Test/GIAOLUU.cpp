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
	ll res = 0;
	for(int i = 0; i < (1 << n); i++) {
		for(int j = n - 1; j >= 0; j--) {
			//cout << ((i >> j) & 1);
			++res;
		}
		//cout << '\n';
	}
	cout << ((res - (n >> 1)) / n) - (n >> 1);
	return 0;
}