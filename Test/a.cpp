// author : Tran Gia Huy
#include "bits/stdc++.h"
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define pf push_front
#define eb emplace_back
#define fi first
#define se second
#define p64 pair<long long, long long>
#define p32 pair<int, int>
#define ll long long
#define ull unsigned long long
#define ldb long double
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define maxn 1000005
#define int long long

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923, EPS = 1e-6;;
const ll INF = 1e18, MOD = 1e9 + 7, MOD2 = 1e9 + 9;
int l, r, dp[20][50][2], cnt;
char k;
vector<int> digit;
int f(int idx, int sum, int tight) {
    if (idx == sz(digit)) return sum;
    if (dp[idx][sum][tight] != -1) return dp[idx][sum][tight];
    char c = (tight) ? digit[idx] + '0' : '9';
    int ans = 0;
    for (char i = '0'; i <= c; i++) {
        int newsum = sum;
        if (i == k) newsum++;
        int newtight = (tight) && digit[idx] == i - '0';
        ans += f(idx + 1, newsum, newtight);
    }
    return dp[idx][sum][tight] = ans;
}
int g(int x) {
    digit.clear();
    while(x) {
        digit.emplace_back(x % 10);
        x /= 10;
    }
    memset(dp, -1, sizeof dp);
    reverse(all(digit));
    return f(0, 0, 1);
}
void OnePunchAC() {
    cin >> l >> r >> k;
    cout << g(r) - g(l - 1) << '\n';
    //cout << cnt << '\n';
}
 
signed main() {
    fastIO
    freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\input.inp", "r", stdin);
    freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\output.out", "w", stdout);
    int tt = 1; cin >> tt;
    while(tt--) OnePunchAC();
    cerr << '\n' << "Times: " << TIME << "s." << '\n';
    //return 0;
}