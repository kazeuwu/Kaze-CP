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
#define int long long
bool pr[500009];
string s = "";
string one, two, three, four, five, six;
void sieve() {
    memset(pr, true, sizeof pr);
    pr[0] = pr[1] = false;
    for(int i = 2; i <= 500005; i++) {
        if(pr[i]) {
            for(int j = 2 * i; j <= 500005; j += i) {
                pr[j] = false;
            }
        }
    }
}
void solve() {
    int n; cin >> n;
    one = "2357";
    sieve();
    for(int i = 0; i < 500005; i++) {
        if(pr[i]) {
            //s += to_string(i);
            if(i > 10 && i < 100) {
                two += to_string(i);
            } else if(i > 100 && i < 1000) {
                three += to_string(i);
            } else if(i > 1000 && i < 10000) {
                four += to_string(i);
            } else if(i > 10000 && i < 100000) {
                five += to_string(i);
            } else if(i > 100000 && i < 1000000) {
                six += to_string(i);
            }
        }
    }
    int mot = 4, hai = sz(two), ba = sz(three), bon = sz(four), nam = sz(five), sau = sz(six);
    while(n--) {
        string s; cin >> s;
        int pos = -1;
        int size = sz(s);
        if(size == 1) {
            for(int i = 0; i < sz(one); i++) {
                if(one[i] == s[0]) {
                    pos = i + 1;
                    break;
                }
            }
        }
        else if(size == 2) {
            for(int i = 0; i < sz(two); i++) {
                string ss;
                for(int j = i; j < i + size && j < sz(two); j++) {
                    ss += two[j];
                }
                if(ss == s) {
                    pos = i + 1;
                    pos += mot;
                    break;
                }
            }
        }
        else if(size == 3) {
            for(int i = 0; i < sz(three); i++) {
                string ss;
                for(int j = i; j < i + size && j < sz(three); j++) {
                    ss += three[j];
                }
                if(ss == s) {
                    pos = i + 1;
                    pos += mot + hai;
                    break;
                }
            }
        }
        else if(size == 4) {
            for(int i = 0; i < sz(four); i++) {
                string ss;
                for(int j = i; j < i + size && j < sz(four); j++) {
                    ss += four[j];
                }
                if(ss == s) {
                    pos = i + 1;
                    pos += mot + hai + ba;
                    break;
                }
            }
        }
        else if(size == 5) {
            for(int i = 0; i < sz(five); i++) {
                string ss;
                for(int j = i; j < i + size && j < sz(five); j++) {
                    ss += five[j];
                }
                if(ss == s) {
                    pos = i + 1;
                    pos += mot + hai + ba + bon;
                    break;
                }
            }
        }
        else if(size == 6) {
            for(int i = 0; i < sz(six); i++) {
                string ss;
                for(int j = i; j < i + size && j < sz(six); j++) {
                    ss += six[j];
                }
                if(ss == s) {
                    pos = i + 1;
                    pos += mot + hai + ba + bon + nam;
                    break;
                }
            }
        }
        cout << pos << '\n';
    }
}

/** ----------ALGORITHMS----------

    ------------------------------ **/

/** ----------MAIN FUNCTION---------- **/
signed main() {
    fastIO
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    int t = 1; //cin >> t;
    while(t--) solve();
}