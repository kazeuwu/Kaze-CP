#include <bits/stdc++.h>
#define endl '\n'
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back

using namespace std;

typedef long long ll;

int lp[2001];
vector<int> pr;

void sieve() {
    for (int i = 2; i <= 2000; i++) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.pb(i);
        }
        for (int j = 0; i*pr[j] <= 2000; j++) {
            lp[i*pr[j]] = pr[j];
            if (lp[i] == pr[j]) break;
        }
    }
}

vector<int> N;
ll dp[20][180][1500][2];

ll f(int idx, int s1, int s2, int tight) {
    if (idx == sz(N)) {
        return lp[s1] == s1 && lp[s2] == s2;
    }
    if (dp[idx][s1][s2][tight] != -1) return dp[idx][s1][s2][tight];
    int c = tight ? N[idx] : 9;
    ll ans = 0;
    for (int i = 0; i <= c; i++) {
        int ntight = N[idx] == i && tight;
        int ns1 = s1 + i;
        int ns2 = s2 + i*i;
        ans += f(idx + 1, ns1, ns2, ntight);
    }
    return dp[idx][s1][s2][tight] = ans;
}

ll g(ll n) {
    N.clear();
    while (n) {
        N.pb(n % 10);
        n /= 10;
    }
    reverse(all(N));
    memset(dp, -1, sizeof dp);
    return f(0, 0, 0, 1);
}

void solve() {
    sieve();
    ll l, r; cin >> l >> r;
    cout << g(r) - g(l - 1);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("ANHEM.inp", "r", stdin);
    freopen("ANHEM.out", "w", stdout);
    solve();
    return 0;
}