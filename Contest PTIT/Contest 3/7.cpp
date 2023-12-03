/**
 *    author:  akira
 *    created: 29/05/2023 23:23:07
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
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll a[n], b[n], c[n];
        ll sum = 0;
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        sort(a, a + n);
        sort(b, b + n, greater<ll>());
        for(ll i = 0; i < n; i++) {
            c[i] = a[i] * b[i];
        }
        for(ll i = 0; i < n; i++) {
            sum += c[i];
        }
        cout << sum << endl;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("7.INP", "r", stdin);
    freopen("7.OUT", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}

/**
*   ⣶⣦⣄⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣾⣿⣿⣿⣷⣦⠀⠀
*   ⣿⣿⣿⣿⣿⣗⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⡿⠛⣝⣿⣿⡷⡀⠀
*   ⣿⡟⠁⡉⠙⠻⣿⣿⣦⣤⣤⣶⣶⣶⣶⣶⣾⣿⣿⡿⠋⠀⠌⡐⠈⣿⣿⣧⠀⠀
*   ⣿⠀⢂⠐⡁⢂⣬⣿⣿⣿⠟⠋⠀⠀⠀⠀⠉⠿⣿⣿⣿⣿⣶⣶⣤⣈⣿⣿⣗⠀
*   ⡇⢀⣦⣼⣾⣿⣿⣿⡿⡃⠌⠀⠀⠀⠀⠀⠀⠀⠑⡹⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀ uwu ♥
*   ⣿⣿⣿⣿⣿⣿⣟⢯⢃⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠉⢎⠳⣯⣟⣿⣿⣿⣿⣷
*   ⣿⣿⣿⣿⡿⡓⢎⠂⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⣰⣬⣧⡝⢊⢹⣿
*   ⣿⣯⠟⠥⠃⢉⠀⣴⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⣿⠀⠸⣻
*   ⡏⠄⡈⠤⣁⠢⡀⢿⣿⣿⣿⠇⠀⠀⠀⠀⣤⡄⠀⣶⠀⠀⡙⢛⢛⡛⠭⢸⣿⣿
*   ⠐⡠⢑⡒⡄⠓⡌⣌⢩⣩⠷⠶⣤⠀⠀⠀⠻⣷⡾⠃⢀⢸⡼⠋⠛⢿⣦⣻⣿⡧
*   ⢀⠱⡈⢖⡈⢣⠜⣠⡟⠁⠀⠀⠀⢳⡄⠀⠀⠀⠀⠀⠐⣾⠃⠀⠀⠀⠈⢿⣯⣿
*   ⣦⠠⢑⠢⣉⠆⢼⡟⠀⠀⠀⠀⠀⢸⣷⠀⠀⠀⠀⠀⣸⡇⠀⠀⠀⠀⠀⠈⣿⣿
*   ⡟⠀⠀⢁⠂⣼⡟⠀⠀⠀⠀⠀⠀⠀⣿⠀⠀⠀⠀⠀⣾⣷⠀⠀⠀⠀⠀⠀⠈⢿
*   ⠀⠀⠀⠀⣴⠏⠀⠀⠀⠀⠀⠀⠀⢠⣿⠀⠀⠀⠀⠀⢸⣿⡅⠀⠀⠀⠀⠀⠀⠀
*   ⠀⠀⠀⠈⠁⠀⠀⠀⠀⠀⠀⠀⢠⣾⡇⠀⠀⠀⠀⠀⠀⢿⣷⠀⠀⠀⠀⠀⠀⠀
**/