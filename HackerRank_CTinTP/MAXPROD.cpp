#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int ans = max(a[0] * a[1], a[n - 1] * a[n - 2]);
    cout << ans;

}