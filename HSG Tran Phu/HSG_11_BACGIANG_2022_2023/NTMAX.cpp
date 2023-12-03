// author : Tran Gia Huy
#include "bits/stdc++.h"
using namespace std;

#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define p64 pair<long long, long long>
#define p32 pair<int, int>
#define ll long long
#define ull unsigned long long
#define ldb long double
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;
vector<int> lp(5000001), pr; 
void sieve() {
	for (int i = 2; i <= 1000000; i++) {
		if (!lp[i]) lp[i] = i, pr.emplace_back(i);
		for (int j = 0; i * pr[j] <= 1000000; j++) {
			lp[i * pr[j]] = pr[j];
			if (pr[j] == lp[i]) break;
		}
	}
}          
void solve() {
    string s; cin >> s;
    s += " ";
    sieve();
    int cnt = 0, sum = 0, ans = 0;
    for(int i = 0; i < sz(s); i++) {
    	if(s[i] >= '0' && s[i] <= '9') {
    		++cnt;
    		sum = sum * 10 + (s[i] - '0');
    	}
    	else {
    		if(lp[sum] == sum) ans = max(ans, sum);
    		sum = 0;
    	}
    }
    cout << cnt << '\n' << ans;
}

int main() {
	fastIO
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\input.inp", "r", stdin);
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\output.out", "w", stdout);
	int t = 1; //cin >> t;
	while(t--) solve();
	cerr << "Times: " << TIME << "s." << endl;
	return 0;
}