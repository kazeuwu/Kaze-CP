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
		int n, m, k, h; cin >> n >> m >> k >> h;
		int H[n + 1], pref[m + 1], cnt = 0;
		//if(m > n) m = n;
		for(int i = 1; i <= n; i++) cin >> H[i];
		for(int i = 1; i <= m; i++) {
			pref[i] = i * k;
		}
		for(int i = 1; i <= n; i++) {
			int height = abs(H[i] - h);
			for(int j = 1; j < m; j++) {
				if(height == pref[j]) ++cnt;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}