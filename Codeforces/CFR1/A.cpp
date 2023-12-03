/**
 *    author:  akira
 *    created: 28/05/2023 22:43:55
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
typedef unsigned long long ull;
using namespace std;

const ldb PI = 3.14159265358979323846264338327950288419716939937510582097494459230;
const ll INF = 1000000000000000000;
const ll MOD = 1000000007;
const ll MOD2 = 1000000009;
const ldb EPS = 1e-6;

void solve() {
    ll a, b, c; cin >> a >> b >> c;
    cout << ((a + c - 1) / c) * ((b + c - 1) / c) << endl;
}

int main() {
    #ifndef ONLINE_JUDGE
    //freopen("A.INP", "r", stdin);
    //freopen("A.OUT", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}