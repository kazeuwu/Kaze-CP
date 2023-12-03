/**
 *    author:  akira
 *    created: 31/05/2023 16:02:36
**/
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ldb;
typedef unsigned long long ull;
using namespace std;

// Problem C
void solve() {
    ll n; cin >> n;
    ll ans = 1;
    for(ll i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            ans *= i;
        }
        while(n % i == 0) n /= i;

    }
    if(n > 1) ans *= n;
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}