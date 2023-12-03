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
const int maxn = 1e5 + 5;
#define int long long
int n, k;
vector<p32> a(maxn);  
vector<ll> comp, f(maxn);

void update(int i, int x) {
    for(; i <= n; i += i & -i) f[i] = max(f[i], x);
}                 
ll get(int i) {
    ll x = 0;
    for(; i; i -= i & -i) x = max(x, f[i]);
    return x;
}
void solve() {
    cin >> n >> k;
    vector<int> a(n + 1), b(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> b[i];

    for(int i = 1; i <= n; i++) {
        int l = lower_bound(a.begin(), a.begin() + i, a[i] - k) - a.begin();
        int res = get(l) + b[i];
        update(i, res);
    }
    int ans = get(n);
    cout << ans;
}

signed main() {
    fastIO
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    int t = 1; //cin >> t;
    while(t--) solve();
    cerr << "Times: " << TIME << "s." << endl;
}