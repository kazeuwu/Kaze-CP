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
const int N = 10000000;
vector<int> lp(N + 1);
vector<int> pr;
void sieve() {
	for(int i = 2; i <= N; i++) {
		if(lp[i] == 0) {
			lp[i] = i;
			pr.pb(i);
		}
		for(int j = 0; i * pr[j] <= N; j++) {
			lp[i * pr[j]] = pr[j];
			if(pr[j] == lp[i]) break;
		}
	}
}
int main() {
	akira
	int l, r; cin >> l >> r;
	sieve();
	int low = lower_bound(all(pr), l) - pr.begin();
	for(; pr[low] <= r;) {
		cout << pr[low++] << '\n';
	}
	return 0;
}