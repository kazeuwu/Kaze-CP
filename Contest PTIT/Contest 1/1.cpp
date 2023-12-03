// Author : Akira
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops") 
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define fi first
#define se second
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) (x / __gcd(x, y) * y)
typedef long long ll;
typedef long double ldb;
typedef unsigned long long ull;
using namespace std;
/** ---------Ideas---------
--------------------------- **/
const ldb PI = 3.14159265358979323846264338327950288419716939937510582097494459230;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;

void solve() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        ll carry = sz(s) - 1;
        while(s[carry] == '1' && carry >= 0) --carry;
        if(carry < 0) {
            for(int i = 0; i < sz(s); i++) {
                cout << 0;
            }
            cout << endl;
        } else {
            s[carry] = '1';
            for(int j = carry + 1; j < sz(s); j++) {
                s[j] = '0';
                cout << s << endl;
            }
        }
    }
}

int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("1.INP", "r", stdin);
    // freopen("1.OUT", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}