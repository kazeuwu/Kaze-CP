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
		for(int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		for(int i = 1; i <= n; i++) {
			for(int j = i + 1; j <= n; j++) {
				if(i == j) continue;
				if(((a[i] & 1) && (a[j] & 1)) || ((a[i] % 2 == 0) && (a[j] % 2 == 0))) {
					if((a[j] < a[i] && j > i) || (a[j] > a[i] && j < i)) {
						swap(a[i], a[j]);
					}
				}
			}
		}
		bool ok = false;
		for(int i = 1; i < n; i++) {
			if(a[i] > a[i + 1]) {
				ok = true;
				break;
			}
		}
		if(ok) {
			cout << "NO" << '\n';	
		}
		else {
			cout << "YES" << '\n';
		}
	}
	return 0;
}