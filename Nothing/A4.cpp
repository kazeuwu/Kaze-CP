// author : akira
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) (int)x.size()
#define pb push_back
#define ull unsigned long long
#define akira ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<ll> lp(n);
vector<ll> pr;
int main() {
	akira
	int n; cin >> n;
	ull ans = 0;
	cin >> n;
	for(ll i = 2; i <= 10000009; i++) {
		if(lp[i] == 0) {
			lp[i] = i;
			pr.pb(i);
		}
		for(ll j = 0; i * pr[j] <= 10000009; j++) {
			lp[i * pr[j]] = pr[j];
			if(pr[j] == lp[i]) break;
		}
	}
	for(ll i = 0; i <= n; i++) {
		if(pr[i] <= n) {
			ans += pr[i];
		}
		else break;
	}
	cout << ans;
	return 0;
}