/** author : akira **/
#include "bits/stdc++.h"
using namespace std;

#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define int long long
#define fi first
#define se second

const int MOD = 1e9 + 7;
const int N = 10000000;
vector<int> lp(N + 1), pr;
int a, b, f[92];
void sieve() {
	for(int i = 2; i <= N; i++) {
		if(lp[i] == 0) {
			lp[i] = i;
			pr.emplace_back(i);
		}
		for(int j = 0; i * pr[j] <= N; j++) {
			lp[i * pr[j]] = pr[j];
			if(pr[j] == lp[i]) break;
		}
	}
}
bool bs1(int l, int r, int x) {
	int m = l + r >> 1;
	while(l <= r) {
		if(f[m] == x) return true;
		else if(f[m] > x) r = m - 1;
		else if(f[m] < x) l = m + 1;
	}
	return false;
}
bool bs2(int l, int r, int x) {
	int m = l + r >> 1;
	while(l <= r) {
		if(pr[m] == x) return true;
		else if(pr[m] > x) r = m - 1;
		else if(pr[m] < x) l = m + 1;
	}
	return false;
}
signed main() {
	fastIO
	cin >> a >> b;
	sieve();
	f[0] = f[1] = 1;
	for(int i = 2; i < 92; i++) {
		f[i] = f[i - 1] + f[i - 2];
	}
	int cnt = 0;
	if(bs1(0, 91, a) && bs2(0, 10000000, b)) ++cnt;	
	cout << cnt;
}