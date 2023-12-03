// author: phucthuhigh
#include <bits/stdc++.h>
#define endl '\n'
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define cint(x) int(x - '0')
#define cchar(x) char(x + '0')
#define pb push_back
#define fi first
#define se second
#define pii pair<int, ll>
#define llll pair<long long, long long>
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) x/__gcd(x, y)*y
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ldb;
const int MOD = 1e9 + 9;
const int INF = 1e9 + 7;
const long long INFLL = (long long)1e18 + 7;

struct Fenwick {
    int n;
    vector<ll> f;
    Fenwick(int n): n(n), f(n + 1, 0LL) {}
    void upd(ll x, int i) {
        for (; i <= n; i+=i&-i) f[i] = max(f[i], x);
    }
    ll get(int i) {
        ll x = 0;
        for (; i; i-=i&-i) x = max(x, f[i]);
        return x;
    }
};
vector<int> comp;
int get(int x) {
    return lower_bound(all(comp), x) - comp.begin() + 1;
}

const int maxn = 1e5 + 5;
pii a[maxn];

void solve() {
    int n, k; cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i].fi, comp.pb(a[i].fi), comp.pb(a[i].fi - k);
    for (int i = 1; i <= n; i++) cin >> a[i].se;
    sort(all(comp));
    comp.resize(unique(all(comp)) - comp.begin());
    sort(a + 1, a + n + 1);
    Fenwick bit(2*n);
    for (int i = 1; i <= n; i++) bit.upd(bit.get(get(a[i].fi - k)) + a[i].se, get(a[i].fi));
    cout << bit.get(2*n);
}

int main() {
    fastIO
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    int t = 1;
    while (t--) solve();
    cerr << "Times: " << TIME << "s." << endl;
    return 0;
}

/**
  *    {\__/}
  *    (• .•)
  *    / >♥️
**/