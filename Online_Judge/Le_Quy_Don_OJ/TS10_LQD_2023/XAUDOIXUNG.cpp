#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define cint(x) int(x - '0')
#define cchar(x) char(x + '0')
#define pb push_back
#define fi first
#define se second
#define pii pair<int, int>
#define llll pair<long long, long long>
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) x/__gcd(x, y)*y
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long ll;
typedef long double ldb;
const ll MOD = 1e9 + 7;
const int INF = 1e9 + 7;
const long long INFLL = (long long)1e18 + 7;

const int base = 311;
ll POW[1000006], hashT[1000006], hashS[1000006];
int n;
string s, t;

ll getHashT(int i, int j) {
    return (hashT[j] - hashT[i-1] * POW[j - i + 1] + MOD * MOD) % MOD;
}

ll getHashS(int i, int j) {
    return (hashS[j] - hashS[i-1] * POW[j - i + 1] + MOD * MOD) % MOD;
}

void init() {
    POW[0] = 1;
    n = sz(s);
    s = " " + s;
    t = " " + t;
    for (int i = 1; i <= n; i++) POW[i] = (POW[i-1] * base) % MOD;
    for (int i = 1; i <= n; i++) hashT[i] = (hashT[i-1] * base + t[i] - 'a' + 1) % MOD;
    for (int i = 1; i <= n; i++) hashS[i] = (hashS[i-1] * base + s[i] - 'a' + 1) % MOD;
}

int main() {
    fastIO
    freopen("DOIXUNG.inp", "r", stdin);
    freopen("DOIXUNG.out", "w", stdout);
    cin >> s;
    t = s;
    reverse(all(t));
    init();
    ll res = 0;

    // odd length
    for (int i = 1; i <= n; i++) {
        int l = 0, r = min(n - i, i - 1), ans = 0;
        while (l <= r) {
            int m = (l + r) >> 1;
            int lx1 = i - m, rx1 = i + m;
            int lx2 = n - rx1 + 1, rx2 = n - lx1 + 1;
            if (getHashS(lx1, rx1) == getHashT(lx2, rx2)) {
                ans = m;
                l = m + 1;
            }
            else r = m - 1;
        }
        res += ans + 1;
    }

    // even length [i, i + 1]
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i + 1]) continue;
        int l = 0, r = min(i - 1, n - i - 1), ans = 0;
        while (l <= r) {
            int m = (l + r) >> 1;
            int lx1 = i - m, rx1 = i + m + 1;
            int lx2 = n - rx1 + 1, rx2 = n - lx1 + 1;
            if (getHashS(lx1, rx1) == getHashT(lx2, rx2)) {
                ans = m;
                l = m + 1;
            }
            else r = m - 1;
        }
        res += ans + 1;
    }

    cout << res;
    return 0;
}

/**
  *    {\__/}
  *    (• .•)
  *    / >♥️
**/