#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    map<bool, int> mp;
    map<int, int> mp2;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a[i] = x;
        mp[x] = true;
        mp2[x]++;
    }
    set<int> se(a, a + n);
    cout << se.size() << '\n';
    int pre = INT_MIN;
    for(int i = 0; i < 1000001; i++) {
        if(mp2[i] > pre) pre = mp2[i];
    }
    cout << pre;
}