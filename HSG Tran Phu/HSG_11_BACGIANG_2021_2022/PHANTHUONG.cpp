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
const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;

/** ------------------------------ NOTES ------------------------------
	- min left - min right - max left - max right -

** ------------------------------------------------------------------**/
#define maxn 1000005
ll a[maxn], mil[maxn], mir[maxn], mal[maxn], mar[maxn], n, ans;
void solve() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    vector<int> l, r;
	for (int i = 1; i <= n; i++) {
		while (!l.empty() && a[i] > a[l.back()]) l.pop_back();
		mal[i] = l.empty() ? 0 : l.back();
		l.emplace_back(i);
	}
	for (int i = n; i > 0; i--) {
		while (!r.empty() && a[i] > a[r.back()]) r.pop_back();
		mar[i] = r.empty() ? n + 1 : r.back();
		r.emplace_back(i);
	}
	l.clear(); r.clear();
	for (int i = 1; i <= n; i++) {
		while (!l.empty() && a[i] <= a[l.back()]) l.pop_back();
		mil[i] = l.empty() ? 0 : l.back();
		l.emplace_back(i);
	}
	for (int i = n; i > 0; i--) {
		while(!r.empty() && a[i] <= a[r.back()]) r.pop_back();
		mir[i] = r.empty() ? n + 1 : r.back();
		r.emplace_back(i);
	}
	for (int i = 1; i <= n; i++) {
		ans += (i - mal[i]) * (mar[i] - i) * a[i];
		ans -= (i - mil[i]) * (mir[i] - i) * a[i];
	}
	cout << ans << '\n';
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