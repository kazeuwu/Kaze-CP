// author : Tran Gia Huy
#include "bits/stdc++.h"
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define pf push_front
#define eb emplace_back
#define fi first
#define se second
#define p64 pair<long long, long long>
#define p32 pair<int, int>
#define ll long long
#define ull unsigned long long
#define ldb long double
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define maxn 200005

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923, EPS = 1e-6;
const ll INF = 1e18, MOD = 1e9 + 7, MOD2 = 1e9 + 9;

vector< pair<int, int> > a;
vector<int> b;
int n, bit[maxn], ans;
int get(int x) {
	int sum = 0;
	for (; x; x -= x & -x) sum = max(sum, bit[x]);
	return sum + 1;
}
void update(int x, int v) {
	for (; x < maxn; x += x & -x) bit[x] = max(bit[x], v);
}
void OnePunchAC() {
    cin >> n;
    a.emplace_back(0, 0);
    b.emplace_back(0);
    for (int i = 1; i <= n; i++) {
    	int x; cin >> x;
    	a.emplace_back(x, i);
    	b.emplace_back(x);
    }
    sort(all(b));
    unique(all(b));
    for (int i = 1; i <= n; i++) a[i].fi = lower_bound(all(b), a[i].fi) - b.begin();
    sort(all(a));
    int res = 0;
    for (int i = 1; i <= n; i++) {
    	int x = get(a[i].fi - 1);
    	res = max(res, x);
    	update(a[i].fi, x);
    }
    ans = n - res;
   // res = 0;
    memset(bit, 0, sizeof bit);
    for (int i = n; i > 0; i--) {
    	int x = get(a[i].fi - 1);
    	res = max(res, x);
    	update(a[i].fi, x);
    }
    ans = min(ans, n - res);
    cout << ans;
}
 
int main() {
	fastIO
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\input.inp", "r", stdin);
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\output.out", "w", stdout);
	int tt = 1; //cin >> tt;
	while(tt--) OnePunchAC();
	cerr << '\n' << "Times: " << TIME << "s." << '\n';
	return 0;
}