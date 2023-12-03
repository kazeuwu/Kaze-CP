/**
 *    author:  akira
 *    created: 30/05/2023 18:03:38
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
typedef unsigned long long ull;
using namespace std;

// Problem E
#define all(x) x.begin(), x.end()

int cnt[3000001];
void solve() {
    ll n; cin >> n;
    ll res = 0;
    memset(cnt, 0, sizeof(cnt));
    vector<int> a(n);
    vector<int> b;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        ++cnt[a[i]];
    }
    set<ll> s(all(a));
    b.assign(all(s));
    for(int i = 0; i < b.size(); i++) {
        if(b[i] == cnt[b[i]]) {
            ++res;
        }
        else res += (cnt[b[i]] / b[i]);
    
    }
    cout << res;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}