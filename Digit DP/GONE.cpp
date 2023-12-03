// author:  akira (a.k.a Tran Gia Huy)
#include "bits/stdc++.h"
using namespace std;

/** --------MACROS-------- **/
#define fastIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define fi first
#define se second
#define ll long long
#define ldb long double

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;
const int mxn = 10000000;
/** --------BASIC FUNCTIONS-------- **/
[[maybe_unused]] ll binpow(ll a, ll n) { int res = 1; while(n) { if(n & 1) {res *= a;} a *= a; n >>= 1; } return res; }
[[maybe_unused]] ll gcd(ll a, ll b) { if(b == 0) return a; return gcd(b, a % b); }
[[maybe_unused]] ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

/** --------PROBLEM SOLVING-------- **/
char a[9], n;
ll dp[9][73];
bool pr[73] = {true};
void sieve(int n) {
    pr[0] = pr[1] = false;
    for(int i = 2; i <= n; i++) {
        if(pr[i]) {
            for(int j = i * i; j <= n; j += i) {
                pr[j] = false;
            }
        }
    }
}
ll thu(int idx, bool tight, int sum) {
    bool newtight;
    if(idx < 0) {
        if(pr[sum]) return 1;
        return 0;
    }
    if(tight == false && dp[idx][sum] >= 0) {
        return dp[idx][sum];
    }
    ll ans = 0;
    char k = (tight) ? a[idx] : 9;
    for(char c = 0; c <= k; c++) {
        newtight = tight && (c == k);
        ans += thu(idx - 1, newtight, sum + c);
    }
    if(tight == false) dp[idx][sum] = ans;
    return ans;
}
ll G(ll x) {
    a[0] = 0;
    n = 0;
    while(x) {
        a[n] = x % 10;
        x /= 10;
        ++n;
    }
    return thu(n - 1, true, 0);
}

/** ------------------------------

    -------------------------- **/

/** --------MAIN FUNCTION-------- **/
int main() {
    fastIO
//	freopen("test.INP", "r", stdin);
//	freopen("test.OUT", "w", stdout);
    memset(dp, -1, sizeof dp);
	sieve(72);
    ll a, b; cin >> a >> b;
    cout << G(b) - G(a - 1);

	return 0;
}