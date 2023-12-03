// author : Tran Gia Huy
#include "bits/stdc++.h"
using namespace std;

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
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;
/**
Sample input 1:
6 5 2
2 2 0 2 1
1 1 0 2 1
1 0 2 0 0
1 2 2 0 2
2 1 2 1 0
2 2 0 2 2
3 11
Sample input 2:
2 3 0
0 0 0
0 0 1
Test tu sinh:
5 5 3
2 2 1 0 1
0 1 1 2 2
2 0 2 2 2
0 0 1 1 1
1 1 2 0 1
3 5 7
**/
int n, m, s;                  
void solve() {
	cin >> m >> n >> s;
    int a[m + 1][n + 1], t[s + 1];
    for (int i = 1; i <= m; i++) {
    	for (int j = 1; j <= n; j++) {
    		cin >> a[i][j];
    	}
    }
    for (int i = 1; i <= s; i++) cin >> t[i];
    for (int i = 1; i <= s; i++) {
    	int i1 = 0, j1 = 0;
    	if (t[i] - m >= 1) j1 = t[i] - m;
    	if (t[i] <= m) i1 = t[i];
    	if (i1 != 0) {
    		for (int x = 1; x <= n; x++) {
    			if (a[i1][x] == 0) a[i1][x] = 1;
    			else if (a[i1][x] == 1) a[i1][x] = 2;
    			else if (a[i1][x] == 2) a[i1][x] = 0;
    		}
    	}
    	if (j1 != 0) {
    		for (int x = 1; x <= m; x++) {
    			if (a[x][j1] == 0) a[x][j1] = 1;
    			else if (a[x][j1] == 1) a[x][j1] = 2;
    			else if (a[x][j1] == 2) a[x][j1] = 0;
    		}
    	}
    }
    int cnt = 0;
    for (int i = 1; i <= m; i++) {
    	for (int j = 1; j <= n; j++) {
    		//cout << a[i][j] << " \n"[j == n];
    		if (!a[i][j]) ++cnt;
    	}
    }
    cout << cnt;
}

int main() {
	fastIO
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\input.inp", "r", stdin);
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\output.out", "w", stdout);
	int t = 1; //cin >> t;
	while(t--) solve();
	cerr << "Times: " << TIME << "s." << endl;
	return 0;
}