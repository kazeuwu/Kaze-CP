// author : Tran Gia Huy
#include "bits/stdc++.h"
using namespace std;

/** ----------MACROS---------- **/
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

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;
                         
/** ----------PROBLEM SOLVING---------- **/
const int maxn = 1e7;
int sum[maxn];
bool pr[50009];
void sieve() {
    for(int i = 0; i < 50009; i++) {
        pr[i] = true;
    }
    pr[0] = pr[1] = false;
    for(int i = 2; i <= 50000; i++) {
        if(pr[i]) {
            for(int j = 2 * i; j <= 50000; j += i) {
                pr[j] = false;
            }
        }
    }
}
void solve() {
    int n; cin >> n;
    vector<int> res;
    sieve();
    for(int i = 1; i < maxn; i++) {
        sum[i] = sum[i / 10] + ((i % 10) * (i % 10));
    }
    for(int i = 0; i < maxn; i++) {
        if(pr[sum[i]]) {
            res.push_back(i);
        }
    }
    cout << res[n - 1];
}

/** ----------ALGORITHMS----------

    ------------------------------ **/

/** ----------MAIN FUNCTION---------- **/
int main() {
    fastIO
  //  freopen("input.inp", "r", stdin);
  //  freopen("output.out", "w", stdout);
    int t = 1; //cin >> t;
    while(t--) solve();
    return 0;
}