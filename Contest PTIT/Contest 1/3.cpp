/**
 *    Author:  Akira
 *    Created: 03/06/2023 16:04:20
**/
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops") 
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define fi first
#define se second
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) x / __gcd(x, y) * y
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
        int n; cin >> n;
        vector<int> a(1005);
        for(int i = 1; i <= n; i++) cin >> a[i];
        int i = n - 1;
        while(i >= 1 && a[i] > a[i + 1]) {
            --i;
        }
        if(i == 0) {
            for(int i = 1; i <= n; i++) {
                cout << i << " ";
            }
        }
        else {
            int j = n;
            while(a[i] > a[j]) --j;
            swap(a[i], a[j]);
            reverse(a.begin() + i + 1, a.begin() + n + 1);
            for(int i = 1; i <= n; i++) {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("3.INP", "r", stdin);
    freopen("3.OUT", "w", stdout);
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