/**
 *    Author:  Akira (アキラ)
 *    Created: 03/06/2023 16:31:18
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

int a[100];
bool ok[100];
void backtrack(int i, int n) {
    for(int j = 1; j <= n; j++) {
        if(!ok[j]) {
            a[i] = j;
            ok[j] = true;
            if(i == n) {
                for(int x = 1; x <= n; x++) cout << a[x];
                cout << " ";
            }
            else backtrack(i + 1, n);
            ok[j] = false;
            
        }
    }

}

void solve() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        backtrack(1, n);
        cout << endl;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("6.INP", "r", stdin);
    freopen("6.OUT", "w", stdout);
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