// author: akira
#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl '\n'
#define pb push_back
#define pf push_front
#define cint(x) int(x - '0')
#define fi first
#define se second
#define llll pair<long long, long long>
#define pii pair<int, int>
#define ll long long
#define ull unsigned long long
#define ldb long double

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923;
const ldb EPS = 1e-6;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;

ll binpow(ll a, ll n) { int res = 1; while(n) { if(n & 1) {res *= a;} a *= a; n >>= 1; } return res; }
ll gcd(ll a, ll b) { if(b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }


int main() {
    //freopen("sol.INP", "r", stdin);
    //freopen("sol.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        vector<vector<int>> v;
        for(int i = 1; i <= n; i++) {
            int x; cin >> x;
            if(x % k == 0) v.pb({k, -i});
            else v.pb({x % k, -i});
        }
        sort(all(v));
        for(int i = n - 1; i >= 0; i--) {
            cout << -1 * v[i][1] << " ";
        }
        cout << '\n';
    }
    return 0;
}
