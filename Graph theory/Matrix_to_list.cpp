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
	int a[n][n];
	vector<pii> edge;
	vector<int> v[1001];
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(a[i][j]) {
				v[i].pb(j);
				//v[j].pb(i);
			}
		}
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